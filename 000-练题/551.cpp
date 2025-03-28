#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    bool a[n][m], b[n][m];
    
    // 初始化数组
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        a[x-1][y-1]=1; // 输入是1-based，需要转换为0-based
    }
    
    int k;
    cin>>k;
    while(k--){
        // 先将b清零
        // memset(b, 0, sizeof(b));
        
        // 扩展水流
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]){
                    b[i][j] = 1;
                    // 检查边界并扩展
                    if(i-1 >= 0) b[i-1][j] = 1;
                    if(i+1 < n) b[i+1][j] = 1;
                    if(j-1 >= 0) b[i][j-1] = 1;
                    if(j+1 < m) b[i][j+1] = 1;
                }
            }
        }
        
        // 更新a数组
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[i][j] = b[i][j];
            }
        }
    }
    
    // 统计被灌溉的方格数
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]) count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}