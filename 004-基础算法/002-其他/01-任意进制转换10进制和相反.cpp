#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // 假设我们要转换的是二进制数 1011，进制为2
    vector<int> vec={1, 0, 1, 1};  // 进制数的每一位
    ll x = 0;  // 结果变量
    int k = 2;  // 进制，假设是二进制

    // 从第一个有效位开始，计算每一位的十进制值
    for(int i = 0; i < (int)vec.size(); ++i){
        x = x * k + vec[i];  // 按位计算
    }

    cout<<x<<endl;

    vector<int> numVec;
    ll num=11;
    int t=2;
    while (num)
    {
        numVec.push_back(num%t);
        num/=t;
    }
    reverse(numVec.begin(),numVec.end());
    for(auto i:numVec){
        cout<<i;
    }
    cout<<endl;
    /*16进制数字可以直接打印输出*/
    unsigned int ans=0x2021abcd;
    cout<<ans<<endl;
    
    return 0;
}
