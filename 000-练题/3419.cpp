#include <bits/stdc++.h>
using namespace std;

const int N = 1010;  // 定义最大字符串长度
char s[N];  // 用来存储输入的字符串
int prefix[N];  // 用于存储前缀和数组，记录每个位置到当前位置的 'L' 和 'R' 数量差

int main() {
    cin >> s;  // 读取输入字符串
    int n = strlen(s);  // 计算字符串的长度
    prefix[0] = 0;  // 初始化 prefix[0] 为 0，表示没有任何字符时的前缀和为 0

    // 计算 prefix 数组
    // prefix[i] 表示从字符串的第 1 个字符到第 i 个字符，'L' 和 'R' 的数量差
    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] == 'L') {
            prefix[i] = prefix[i - 1] + 1;
        } else {
            prefix[i] = prefix[i - 1] - 1;
        }
         // 如果是 'L'，加 1；如果是 'R'，减 1
    }

    int ans = 0;  // 用来记录最长符合条件的子串的长度

    // 双重循环，遍历所有可能的子串
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            // 如果当前子串的前缀和差为 0，说明该子串内的 'L' 和 'R' 数量相等
            if (prefix[j] - prefix[i - 1] == 0) {
                // 更新答案，取当前子串的长度和当前最大长度中的较大值
                ans = max(ans, j - i + 1);
            }
        }
    }

    cout << ans << "\n";  // 输出最长符合条件的子串长度
    return 0;
}
