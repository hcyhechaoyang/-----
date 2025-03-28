#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); // 读取一行输入

    // 从字符串末尾开始遍历
    for (size_t i = s.size(); i-- > 0;) {
        cout << "i = " << i << ", s[i] = " << s[i] << endl;
    }

    return 0;
}