#include<bits/stdc++.h>
using namespace std;



int main(){
    char c1='a';
    char c2='A';
    /*1.islower和isupper检查字符为小写字母还是大学字母*/
    if(islower(c1)){
        cout<<"is lowercase letter!"<<endl;
    }

    /*2.tolower和toupper大小写转换字符*/
    cout<<(char)tolower(c2);
}