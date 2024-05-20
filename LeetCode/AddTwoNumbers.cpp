#include <bits/stdc++.h>
using namespace std;

int a, b;
int A[100005], B[100005], result[100005];

void input() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> A[i];
    }

    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> B[i];
    }
}

void solve() {
    for (int i = 0; i < a; i++) {
        if (i > 1 && result[i - 1] > 9) {
            result[i] = A[i] + B[i] + 1;
            result[i - 1] -= 10;
        } else {
            result [i] = A[i] + B[i];
        }
    }
}

void print() {
    for (int i = 0; i < a; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    solve();
    print();

    return 0;
}