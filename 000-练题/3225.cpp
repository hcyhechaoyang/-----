#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)cin>>arr[i];
    for(int j=n;j>=1;--j)
    for(int k=0;k<j-1;++k)
    if(arr[k]>arr[k+1])
    swap(arr[k],arr[k+1]);
    for(auto m:arr)cout<<m<<" ";
}