#include <bits/stdc++.h>
using namespace std;

#define MAX 1e9 + 7;
int n, a[100005];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
    }
    cout << count;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    solve();

    return 0;
}