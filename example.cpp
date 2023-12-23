#include <bits/stdc++.h>

#define MAX_N 100005

using namespace std;

int n;
int f[MAX_N];

void Recursion(int cur, int n) {
    if (cur == n+1) {
        for (int i = 0; i < n; i++) {
            cout << f[i];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i <= 1; i++) {
        f[cur] = i;
        Recursion(cur + 1, n);
    }

    return;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    Recursion(0, n);

    return 0;
}