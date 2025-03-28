#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // 输入参赛者人数
    vector<int> a(n); // 存储每个参赛者的战斗得分
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // 输入每个参赛者的战斗得分
    }

    // 按战斗得分降序排序
    sort(a.begin(), a.end(), greater<int>());

    int totalX = 0; // 总奖金
    for (int i = 0; i < n; i++) {
        // 排名为 i 的参赛者奖金是 n - i - 1
        totalX += (n - i-1);
    }

    cout << totalX+1 << endl; // 输出总奖金
    return 0;
}