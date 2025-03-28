#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector的定义，动态数组容器
    vector<int> vec;
    /*vector的常用函数*/
    //push_back()将元素插入末尾
    vec.push_back(1);
    vec.push_back(2);
    for(const auto &i:vec){
        cout<<i;
    }
    //pop_back()将元素删除在末尾的:一定要保证vector非空
    vec.pop_back();
    cout<<endl;
    cout<<"After Delete:";
    for(const auto &i:vec){
        cout<<i<<endl;
    } 
    //vector去重，先排序在使用unique函数去重，重复元素排到最后，在使用erase函数释放
    vector<int> p={3,2,2,3,7,6,1,1,7,9};
    sort(p.begin(),p.end());
    auto it=unique(p.begin(),p.end());
    p.erase(it,p.end());
    for(const auto &i:p){
        cout<<i<<endl;
    } 
    //插入insert(位置，元素)
    p.insert(p.begin()+1,7);
    for(const auto &i:p){
        cout<<i<<endl;
    } 
    



}