#include<bits/stdc++.h>
using namespace std;
vector<int> L; // 离散化数组

// 返回x在L的下标
int getIndex(int x){
    return lower_bound(L.begin(), L.end(), x) - L.begin();
}

const int N = 1e5 + 9;
int a[N]; // 原数组

int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    // 将元素存入L数组中
    for(int i = 1; i <= n; ++i)
        L.push_back(a[i]);
    
    // 排序并去重
    sort(L.begin(), L.end());
    L.erase(unique(L.begin(), L.end()), L.end());
    
    return 0; 
}
