#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100005
int n, a[MAX_N];

void input(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve(){
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[i + 1])
            count++;
    }
    cout << count;
}

int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    input();
    solve();

    return 0;
}