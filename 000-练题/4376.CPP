#include <bits/stdc++.h> // 包含 C++ 标准库的所有常用头文件
using namespace std;
#define ll long long // 定义 ll 为 long long 类型，避免重复写，便于处理大数据

// 函数 judge：计算两个区间中满足 x < y 的整数对数量
// 参数 vecNum：包含四个整数的向量，分别表示 a, b, c, d
ll judge(vector<ll> vecNum) {
    // 从向量中提取四个整数，分别代表两个区间的边界
    ll a = vecNum[0]; // 第一个区间的起点
    ll b = vecNum[1]; // 第一个区间的终点
    ll c = vecNum[2]; // 第二个区间的起点
    ll d = vecNum[3]; // 第二个区间的终点
    
    ll sum = 0; // 用于累加满足条件的整数对数量，初始化为 0

    // 遍历第一个区间 [a, b] 中的每个整数 x
    for (ll x = a; x <= b; x++) {
        // 情况 1：当 x < c 时
        // 此时第二个区间 [c, d] 中的所有 y 都满足 x < y
        if (x < c) {
            sum += d - c + 1; // y 的数量为 [c, d] 的长度，即 d - c + 1
        } 
        // 情况 2：当 c <= x < d 时
        // 此时 y 的范围是 [x+1, d]，需要满足 x < y
        else if (c <= x && x < d) {
            sum += d - x; // y 的数量为 d - x（从 x+1 到 d 的整数个数）
        }
        // 隐含情况 3：当 x >= d 时
        // 此时没有 y 满足 x < y，sum 不增加（无需显式处理）
    }
    
    return sum; // 返回总的整数对数量
}

int main() {
    int T; // 测试用例的数量
    cin >> T; // 从标准输入读取测试用例数

    // 创建一个二维向量 vec，包含 T 行，每行 4 个元素，用于存储每组输入的 a, b, c, d
    vector<vector<ll>> vec(T, vector<ll>(4));
    
    // 输入处理：循环读取 T 组数据
    for (int i = 0; i < T; i++) {
        // 读取每组的四个整数 a, b, c, d
        for (int j = 0; j < 4; j++) {
            cin >> vec[i][j]; // 将输入存储到 vec[i][j] 中
        }
    }
    
    // 输出处理：对每组数据调用 judge 函数并输出结果
    for (auto i : vec) { // 遍历每一组输入向量 i
        cout << judge(i) << endl; // 调用 judge 计算结果并输出，每组结果占一行
    }
    
    return 0; // 程序正常结束
}