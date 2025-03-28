#include<bits/stdc++.h>
using namespace std;
int main(){
    /*二分查找的前提
    1.只能对数组进行
    2.数组必须是单调不减即递增，若递减使用排序之后进行二分查找*/
    //binary_search函数,返回bool类型
    //binary_search(起始位置，末尾，目标元素)
    vector<int> nums={1,3,5,7,9};
    if(binary_search(nums.begin(),nums.end(),3)) cout<<"yes";
    else cout<<"false";

    //lower_bound和upper_bound函数
    //1.必须在非降序数组中使用
    //lower_bound(begin,end,x)返回第一个大于等于x元素的地址
    //upper_bound(begin,end,x)返回第一个大于x元素的地址
    //如果不存在则返回最好一个地址
    //[lower_bound,upper_bound]

    vector<int> v={1,2,6,4,3};
    sort(v.begin(),v.end());
    for (auto i:v)
    {
        cout<<i;
    }
    cout<<endl;

    int i = (lower_bound(v.begin(),v.end(),5))-v.begin();//需要用返回的索引值减去开始得到下标（这里重中之重）
    cout<<i;


}