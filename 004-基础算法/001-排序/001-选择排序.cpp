#include<bits/stdc++.h>
using namespace std;
/*这段代码实现了选择排序算法，通过反向遍历数组，每次找到未排序部分中的最大元素，并将其与当前元素交换位置。*/
//1 5 9 3 7
int main(){
    int arr[5]={1,5,9,3,7};
    for(int i=4;i>0;--i){
        int max_id=0;
        for(int j=0;j<=i;++j){
            if(arr[j]>arr[max_id])max_id=j;
        }
        swap(arr[max_id],arr[i]);
    }
    for(auto k:arr){
        printf("%d",k);
    }

}