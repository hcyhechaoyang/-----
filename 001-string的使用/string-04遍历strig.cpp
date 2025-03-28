#include<bits/stdc++.h>
using namespace std;

/*普通用循环枚举*/
//2.使用auto枚举

int main(){
    string str="hello world!";
    for (auto &i : str)
    {
        //当取引用符号的时候可以修改值
        //i='a';
        cout<<i;
    }
    // cout<<str;
    


}
