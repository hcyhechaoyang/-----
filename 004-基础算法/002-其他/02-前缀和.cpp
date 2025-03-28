#include <iostream>
using namespace std;

const int N = 1e5 + 9;
long long prefix[N] = {0}, numbers[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Please enter the number of elements:" << endl;
    cin >> n;

    cout << "Please enter the elements:" << endl;
    for (int i = 1; i <= n; ++i) {
        cin >> numbers[i];
    }

    // Calculate prefix sum
    for (int j = 1; j <= n; ++j) {
        prefix[j] = prefix[j - 1] + numbers[j];
    }

    int l, r;
    cout << "Please enter the range [l, r]:" << endl;
    cin >> l >> r;

    // Check range validity
    if (l < 1 || r > n || l > r) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    // Output the result
    cout << "The sum of elements from index "<< l << " to "<< r << " is: " << prefix[r] - prefix[l - 1] << endl;

    return 0;
}