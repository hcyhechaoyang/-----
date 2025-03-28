#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 7;
ll diff[N], a[N];

int main() {
    int n, q;
    cin >> n >> q;
    a[0] = 0;  // 初始化 a[0] 为 0，避免未定义行为

    // 输入数组 a
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];

    // 构建差分数组
    for (int i = 1; i <= n; ++i) 
        diff[i] = a[i] - a[i - 1];

    // 处理区间操作
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        diff[l] += x;
        if (r + 1 <= n) {  // 确保不越界
            diff[r + 1] -= x;
        }
    }

    // 恢复原数组
    for (int i = 1; i <= n; ++i) 
        a[i] = a[i - 1] + diff[i];

    // 输出结果，确保所有元素非负
    for (int i = 1; i <= n; ++i) 
        cout << max(0ll, a[i]) << " ";

    return 0;
}
