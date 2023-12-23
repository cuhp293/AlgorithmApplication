#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100005

int n;
int f[MAX_N];

void BINARY_SEQUENCE_GEN(int n, string s = "", int i = 0) {
    if (i == n) {
        cout << s << endl;
        return;
    }

    BINARY_SEQUENCE_GEN(n, s+"0", i+1);
    BINARY_SEQUENCE_GEN(n, s+"1", i+1);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    BINARY_SEQUENCE_GEN(n);

    return 0;
}