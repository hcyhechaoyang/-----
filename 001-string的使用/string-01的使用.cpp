#include<bits/stdc++.h>
using namespace std;

int main(){

    //读入一行字符串getline(cin,s);
    //初始化一个字符串
    string str1;
    //直接复制
    string str2="Hello world!";
    //使用substr(起始位置,截取长度)
    string str4=str2.substr(0,5);
    //使用字符数组初始化数组
    const char *charArray = "Hello,world!";
    string str5(charArray);
    //使用重复字符初始化，变量名(字符长度，字符)
    string str6(5,'A');

    cout<<"str1=="<<str1<<endl;
    cout<<"str2=="<<str2<<endl;
    cout<<"str4=="<<str4<<endl;
    cout<<"str5=="<<str5<<endl;
    cout<<"str6=="<<str6<<endl;



    return 0;
}