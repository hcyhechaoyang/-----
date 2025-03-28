#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n, k, time = INT_MAX; 
    cin >> n >> k; // 输入数组的长度n和目标和k

    unordered_map<int, int> mp; // 使用哈希表存储每个元素对应的最小时间（索引距离）
    
    for (int i = 0; i < n; i++) {
        int a; 
        cin >> a; // 输入当前元素a

        // 计算当前元素a的索引i对应的最小时间t
        // t为i+1和n-i中的较小值，表示从左或右端点到当前位置的最小距离
        int t = min(i + 1, n - i);

        // 检查是否存在另一个元素(k - a)在哈希表中，并且排除a与(k - a)相等的情况（防止同一个元素被重复使用）
        if (mp.find(k - a) != mp.end() && k != 2 * a) {
            // 更新最小时间time为当前时间与之前记录时间的较大值中的较小者
            time = min(time, max(mp[k - a], t));
        }

        // 更新或插入当前元素a对应的最小时间t到哈希表中
        if (mp.find(a) != mp.end()) {
            mp[a] = min(mp[a], t); // 如果a已存在，更新为较小的时间
        } else {
            mp[a] = t; // 如果a不存在，插入新的键值对
        }
    }

    // 输出结果，如果找到满足条件的元素对，输出最小时间；否则输出-1
    cout << (time == INT_MAX ? -1 : time);
    
    return 0; 
}