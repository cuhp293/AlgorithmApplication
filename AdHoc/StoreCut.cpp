#include <bits/stdc++.h>
using namespace std;

int iStore[4];
int T;

void input() {
    for (int i = 0; i < 4; i++) {
        cin >> iStore[i];
    }
}

void solve() {
    sort(iStore, iStore + 4);
    if (iStore[0] < 0 && iStore[1] < 0)
        cout << iStore[0] + iStore[1] << endl;
    else if (iStore[0] < 0)
        cout << iStore[0] << endl;
    else cout << 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> T;
    for (int i = 0; i < T; i++) {
        input();
        solve();
    }

    return 0;
}