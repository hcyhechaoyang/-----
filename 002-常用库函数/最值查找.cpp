#include<bits/stdc++.h>
using namespace std;

int main(){
    //min_element()和max_element()
    vector<int> vec = {3,6,7,8, 4, 1, 5, 9};

    // 找到最小元素的迭代器
    auto minIt = min_element(vec.begin(), vec.end());
    auto maxIt=max_element(vec.begin(),vec.end());

    // 输出最小元素
    cout << "Min element: " << *minIt << endl;
    // 输出最小元素
    cout << "Max element: " << *maxIt << endl;


    /*nth_element(st,k,ed)函数*/
    //用于部分排序。它的作用是将序列中第 k 位置的元素保证左边的元素都小于等于它，右边的元素都大于等于它。
    int k = 2;
    nth_element(vec.begin(), vec.begin() + k, vec.end());

    // 输出结果
    cout << "The " << k + 1 << "th smallest element is: " << vec[k] << endl;
    cout << "Partially sorted vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
