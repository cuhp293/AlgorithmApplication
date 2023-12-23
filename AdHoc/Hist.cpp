#include <bits/stdc++.h>
using namespace std;

int n, ans = -2e9;
int a[];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int minLength = a[i];
        for (int j = i-1; j < n; j++) {
            if (minLength > a[j])
                minLength = a[j];
            
            int area = minLength * (j - i + 1);
            if (area > ans)
                ans = area;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    solve(a, n);

    return 0;
}