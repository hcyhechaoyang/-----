#include<bits/stdc++.h>
using namespace std;
/**
 * 冒泡排序是一种简单的排序算法，其基本思想是通过重复交换相邻的元素来将数据按顺序排列。
 * 每一轮比较都将当前未排序部分的最大（或最小）元素“冒泡”到序列的末端。
 */
int main(){
    int n=8;
    int arr[n]={4,3,7,2,9,1,4,6};
    for(int i=n;i>=1;--i){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
    for(auto k:arr){
        printf("%d",k);
    }
}
