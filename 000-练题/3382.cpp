#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 9;
const ll MOD = 1e9 + 7;
ll a[6][N];
ll prefix[6][N];

int main() {
    int n, m;
    cin >> n >> m;
    
    // 输入第一行数据（a[1][1] 到 a[1][n]）
    for (int i = 1; i <= 5; ++i) {
        cin >> a[1][i];
    }

    // 填充 a 数组的第 2 到第 5 行
    for (int j = 2; j <= 5; ++j) {
        for (int i = 1; i <= 5; ++i) {
            a[j][i] = a[j - 1][i] * a[1][i] % MOD;
        }
    }

    // 计算前缀和
    for (int i = 1; i <= 5; ++i) {
        prefix[i][0] = 0;
        for (int j = 1; j <= n; ++j) {
            prefix[i][j] = (prefix[i][j - 1] + a[i][j]) % MOD;
        }
    }

    // 处理查询
    while (m--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << (prefix[k][r] - prefix[k][l - 1] + MOD) % MOD << "\n";
    }

    return 0;
}
