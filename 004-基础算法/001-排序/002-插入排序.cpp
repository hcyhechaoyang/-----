#include<bits/stdc++.h>
using namespace std;
/*
插入排序是一种简单的排序算法，它的原理类似于打扑克牌时手动排序的过程。具体的步骤如下：
1.从第二个元素开始，逐个与前面已经排好序的部分进行比较。
2.如果当前元素小于前面某个元素，就将该元素向后移动一位。
3.直到找到合适的位置，将当前元素插入到正确的位置。
4.重复以上步骤，直到整个数组有序。
 */
int main(){
    int arr[5] = {6, 5, 9, 3, 7};
    for(int i = 1; i <= 4; ++i) {
        int key = arr[i];
        int k = i;
        // 将比 key 大的元素向后移动
        while(k > 0 && key < arr[k - 1]) {
            arr[k] = arr[k - 1];
            --k;
        }
        arr[k] = key;  // 将 key 插入到合适的位置
    }

    // 输出排序后的数组
    for(auto i : arr) {
        printf("%d ", i);
    }

    return 0;
}
