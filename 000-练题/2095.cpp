#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  // 请在此输入您的代码
  string x="2022";
  int k=9;
  int ans=0;
  for(int i=0;i<(int)x.length();++i){
    ans=ans*k+(x[i]-'0');
  }
  cout<<ans;
  return 0;
}