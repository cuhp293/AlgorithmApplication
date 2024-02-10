#include <bits/stdc++.h>
using namespace std;

int n;
int A[1000];
int tmp = 0;
bool bMark[1000];

void input() {
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        bMark[i] = false;
    }
}

void find() {
    sort(A, A+n);
    for(int i = n-1; i >= 2; i--) {
        int a = A[i];
        int b = 0;
        int c = i-1;

        while (b<c) {
            if (a == A[b]+A[c]) {
                tmp++;
                b++;
                c--;
            } else if (a > A[b]+A[c]) {
                b++;
            } else {
                c--;
            }
        }
    }
    cout << tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    input();
    find();

    return 0;
}