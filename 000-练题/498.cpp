#include<bits/stdc++.h>
using namespace std;
/*判断回文日期*/
bool adjustPalindromes(string str){
    for(int i=0;i<str.length()/2;++i){
        if(str[i] != str[str.length() - 1 - i]) return false;

    }
    return true;
}
/*判断回文ABABBABA型*/
bool adjustABA(string str){
    if(adjustPalindromes(str)){
        if(str[0] == str[2] && str[1] == str[3] ) {
             return true;
        }
    }
    return false;
}

/*判闰*/
bool adjustLeapOrConnon(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

}
/*字符串转整*/
int StrToInt(string s){
    int res = 0;
    for(auto i : s){
        res = res * 10 + (i - '0');
    }    
    return res;   

}
/*整转字符串*/
string IntToStr(int x, int w) {
    string s = to_string(x);
    while (s.length() < w) {
        s = '0' + s; // 前补 0
    }
    return s;
}

/*判断年月日合法性*/
bool isOk(int year,int month,int day){
    int leapYearDay[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//闰年
    int commonYearDay[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//平年
    if(adjustLeapOrConnon(year)) return day <= leapYearDay[month];
    else return day <= commonYearDay[month];
    
}
int main() {
    string str;
    cin >> str;
    int year = StrToInt(str.substr(0, 4));
    int month = StrToInt(str.substr(4, 2));
    int day = StrToInt(str.substr(6, 2));

    bool ans1 = false;
    bool ans2 = false;

    for (int i = year; i < 10000; ++i) {
        for (int j = 1; j <= 12; ++j) {
            if (i == year && j < month) continue;
            for (int k = 1; k <= 31; ++k) {
                if (i == year && j == month && k <= day) continue;
                if (!isOk(i, j, k)) continue;

                string date = IntToStr(i, 4) + IntToStr(j, 2) + IntToStr(k, 2);
                
                if (!ans1 && adjustPalindromes(date)) {
                    cout << date << endl;
                    ans1 = true;
                }
                if (!ans2 && adjustABA(date)) {
                    cout << date << endl;
                    ans2 = true;
                }
                if (ans1 && ans2) return 0;
            }
        }
    }
    return 0;
}
