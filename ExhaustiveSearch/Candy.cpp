#include <bits/stdc++.h>
using namespace std;

const int N = 20;
int m, n;
int a[N];
int m0 = 0, m1;

void solve() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int k) {
    if (k == n) {
        a[k] = m - m0;
        solve();
        return;
    }
    m1 = m - m0 - (n - k);

    for (int i = 1; i <= m1; i++) {
        a[k] = i;
        m0 += a[k];
        Try(k+1);
        m0 -= a[k];
    }
}

int main() {
    cin >> n >> m;
    Try(1);
    return 0;
}