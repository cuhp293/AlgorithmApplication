#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;

int n;
vector<int> vt;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        vt.push_back(tmp);
    }
}

void solve(vector<int> vt, int n) {
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++) {
        sum += vt[i];
        if (sum < 0) {
            sum = 0;
        } else if (sum > maxSum) {
            maxSum = sum;
        }
    }
    cout << maxSum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    solve(vt, n);

    return 0;
}