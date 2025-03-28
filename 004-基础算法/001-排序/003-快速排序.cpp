#include <bits/stdc++.h>
using namespace std;

// 分区函数，用于将数组根据基准元素进行分区
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // 基准元素选为数组的最后一个元素
    int i = low - 1;  // i 是小于基准元素的区域的指针

    // 遍历数组，将小于基准元素的元素移到左边
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  // 将基准元素放到它正确的位置
    return i + 1;  // 返回基准元素的位置
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 找到基准元素的正确位置
        int pi = partition(arr, low, high);

        // 递归地对基准元素左边和右边的子数组进行快速排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {6, 5, 9, 3, 7};  // 要排序的数组
    int n = sizeof(arr) / sizeof(arr[0]);  // 数组的大小

    quickSort(arr, 0, n - 1);  // 调用快速排序

    // 输出排序后的数组
    for (auto i : arr) {
        printf("%d ", i);
    }

    return 0;
}
