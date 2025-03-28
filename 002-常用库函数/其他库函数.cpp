#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. memset()：将数组或内存块的值设置为指定的值
    int arr[5];
    memset(arr, 0, sizeof(arr)); // 将 arr 的所有元素初始化为 0
    cout << "After memset: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. swap()：交换两个变量的值
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b); // 交换 a 和 b 的值
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // 3. reverse()：反转容器中的元素顺序
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Before reverse: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    reverse(vec.begin(), vec.end()); // 反转 vec 中的元素
    cout << "After reverse: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // 4. unique()：去除容器中相邻的重复元素
    vector<int> vec2 = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    cout << "Before unique: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;
    //去重前进行排序
    auto last = unique(vec2.begin(), vec2.end()); // 去除相邻重复元素
    vec2.erase(last, vec2.end()); // 删除多余的空间
    cout << "After unique: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}