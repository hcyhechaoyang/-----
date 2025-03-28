#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> vec(n);  // 使用 vector 替代变长数组
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }
//     sort(vec.begin(), vec.end(), greater<int>());  // 从大到小排序

//     long long sum = 0;  // 总奖金，用 long long 防止溢出
//     int m = 1;  // 当前排名起点

//     for (int i = 0; i < n; ) {  // 注意：i 在循环内动态更新
//         int count = 1;  // 当前得分的出现次数，至少为 1
//         while (i + count < n && vec[i] == vec[i + count]) {
//             count++;  // 统计连续相同得分的个数
//         }
//         sum += 1LL * (n - m) * count;  // 计算该组总奖金
//         m += count;  // 更新排名
//         i += count;  // 跳到下一个不同得分
//     }

//     cout << sum << endl;
//     return 0;
// }

int main(){

    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end(),greater<int>());
    //总金额
    long long total=0;
    int m = 1;           // 排名从 1 开始
    for (int i = 0; i < n;)//i在函数内动态更新,即排名
    {
        //每个分数的个数，起始个数为1
        int count=1;
        //开始判断数所有中所有同样分数的个数
        for (int j =i+1; j < n; j++)
        {
            if(vec[i]==vec[j])count++;
            else break;
        }
        total+=(n-m)*count;
        m+=count;
        i+=count;
  
                
    }
    cout<<total;
    return 0;    
}