#include <bits/stdc++.h>
using namespace std;
#define MaxSize 150

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mineField(n, vector<int>(m));
    vector<vector<int>> result(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mineField[i][j];
        }
    }

    // 扫描九宫格做判断处理
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mineField[i][j] == 1){
                result[i][j] = 9;
            }
            else{
                int count = 0;
                for(int x = max(0, i - 1); x < min(n, i + 2); x++){ // 修正上限
                    for(int y = max(0, j - 1); y < min(m, j + 2); y++){ // 修正上限和变量
                        if(mineField[x][y] == 1) count++;
                    }
                }
                result[i][j] = count;
            }
        }
    }

    // 输出结果，确保最后一个数字后没有空格
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << result[i][j];
            if(j != m - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}