#include <bits/stdc++.h>

#define MAX_N 100005

using namespace std;

int n;
int target;
vector<int> vt;

void input() {
    cin >> n >> target;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        vt.push_back(tmp);
    }
}

void solve(int target, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vt[i] == target)
            count++;
    }
    cout << count;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    solve(target, n);

    return 0;
}