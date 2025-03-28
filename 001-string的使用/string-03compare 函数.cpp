#include <iostream>
#include <string>
using namespace std;
  /*string重载了不等号，所以可以直接使用s1<s2的方式来
    比较string的大小，比较的规则是按照字典序大小进行比较。
    字典序的比较方法是从小到大一个一个比较，一旦遇到不相等的字符就确定大小关系。
    例如:
    аааа < bbbb
    azz < baaa
    aZZZZZZZZZZZzz <b
    lanqiao ==lanqiao*/

int main() {
    // 定义几个字符串
    string s1 = "aaaa";
    string s2 = "bbbb";
    string s3 = "azz";
    string s4 = "baaa";
    string s5 = "aZZZZZZZZZZZzz";
    string s6 = "b";
    string s7 = "lanqiao";
    string s8 = "lanqiao";

    // 使用 compare 函数比较字符串
    cout << "s1 vs s2: " << s1.compare(s2) << endl; // 输出负数 (s1 < s2)
    cout << "s3 vs s4: " << s3.compare(s4) << endl; // 输出负数 (s3 < s4)
    cout << "s5 vs s6: " << s5.compare(s6) << endl; // 输出负数 (s5 < s6)
    cout << "s7 vs s8: " << s7.compare(s8) << endl; // 输出 0 (s7 == s8)

    // 更多比较示例
    string s9 = "apple";
    string s10 = "banana";
    string s11 = "Apple"; // 注意：大写字母的 ASCII 值小于小写字母

    cout << "s9 vs s10: " << s9.compare(s10) << endl; // 输出负数 (s9 < s10)
    cout << "s11 vs s9: " << s11.compare(s9) << endl; // 输出负数 (s11 < s9)

    return 0;
}