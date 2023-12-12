#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int n;
int f[1000005];



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = -2e9;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = i; j <= n; j++) {
//          int sum = 0;
//          for (int k = i; k <= j; k++)
//              sum += a[k];
            sum += a[j];
            if (sum > ans)
                ans = sum;
        }
    }
    cout << ans;

    return 0;
}