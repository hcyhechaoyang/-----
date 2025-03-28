#include<bits/stdc++.h>
using namespace std;
int main(){
    //next_permutation()函数,每次生成下一个排列，直到没有更多排列时返回 false
    // 输出全部排列时，必须先对序列排序，以确保从最小排列开始
    vector<int> vec={2,1,4};
    sort(vec.begin(),vec.end());
    for (auto i :vec)
    {
        cout<<i;
    }
    cout<<endl;
    
    while (next_permutation(vec.begin(),vec.end()))
    {
        for (auto i :vec)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}