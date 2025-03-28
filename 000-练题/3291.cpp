#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 9;
int a[N], diff[N];

void test(int n, int m) {
    a[0] = 0;

    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) diff[i] = a[i] - a[i - 1];

    while (m--) {
        int x, y, z;
        cin >> x >> y >> z;
        diff[x] += z;
        diff[y + 1] -= z;
    }

    for (int i = 1; i <= n; ++i) a[i] = a[i - 1] + diff[i];
    for (int i = 1; i <= n; ++i) cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        test(n, m);
    }
    return 0;
}
