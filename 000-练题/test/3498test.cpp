#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 23333333;
    double h = 0;

    for (int i = 1; i <= n / 2; i++) {  // 遍历 0 的个数
        double p0 = i * 1.0 / n;  // 避免整数除法错误
        double p1 = 1 - p0;
        int j = n - i;

        if (p0 > 0 && p1 > 0) {  // 避免 log2(0) 计算错误
            h = -(i * (p0 * log2(p0))) - (j * (p1 * log2(p1)));

            if (fabs(h - 11625907.5798) < 1e-4) {  // 允许更大的误差范围
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
