#include <bits/stdc++.h>
using namespace std;

int n, a[25];
int year, curSum = 0;
vector<int> curNum;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> year;
}

// void print() {
//     int count = 0;
//     for (int i : curNum)
//         count++;
//     cout << count;
// }

void solve(int pos) {
    int count = 0;
    int lastIndex = (curNum.empty() ? 0 : curNum.back());
    for (int i = lastIndex+1; i <= n; i++) {
        curNum.push_back(i);
        curSum += a[i];

        if (curSum >= year) {
            count++;
        } else
            solve(pos + 1);

        curNum.pop_back();
        curSum -= a[i];
    }
    cout << (int)count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    solve(1);

    // print();

    return 0;
}