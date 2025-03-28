#include<bits/stdc++.h>
using namespace std;

int main(){
    //定义pair结构 pair(类型1，类型2) 变量名
    pair<int,string> p1(1,"123");
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    //pair的嵌套
    pair<int,pair<string,pair<int,int>>> p2(1,make_pair("tt",make_pair(4,4)));
    cout<<p2.first<<"-----------"<<p2.second.second.first<<endl;
    //pair自带排序规则
    /*pair自带的排序规则是按照first成员进行升序排序。
    如果first成员相等，则按照second成员进行升序排序，
    这意味着当你使用标准库中的排序算法(如std::sort)对包含pair对象的容器进行排序时
    ，会根据pair对象的first成员进行排序。*/
    vector<pair<int,int>> vec;
    vec.push_back(make_pair(1,2));
    vec.push_back(make_pair(4,2));
    vec.push_back(make_pair(0,2));
    sort(vec.begin(),vec.end());
    for(auto &p:vec){
        cout<<p.first<<"+"<<p.second<<endl;
    }

}