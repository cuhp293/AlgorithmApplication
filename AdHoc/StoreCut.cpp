#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    int store[4];
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> store[1] >> store[2];
        cin >> store[3] >> store[4];

        sort(store, store + 4);
        int sum = 0;
        if (store[1] < 0) sum += store[1];
        if (store[2] < 0) sum += store[2];
        cout << sum << endl;
    }

    return 0;
}