#include <bits/stdc++.h>
using namespace std;

int n, a[25];
int year, curSum = 0;
vector<int> curNum, bestNum;

void input() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> year;
}

void print() {
    int count = 0;
    for (int i : bestNum)
        count++;
    cout << count;
}

void solve(int pos) {
    int lastIndex = (curNum.empty() ? 1 : curNum.back());
    for (int i = lastIndex; i <= n; i++) {
        curNum.push_back(i);
        curSum += a[i];
        if (curSum >= year) {
            if (curSum == year) {
                bestNum.clear();
                for (int i : curNum)
                    bestNum.push_back(i);
            }
        } else if (bestNum.empty() || curNum.size() < bestNum.size())
            solve(pos + 1);

        curNum.pop_back();
        curSum -= a[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    curNum.clear();
    bestNum.clear();
    solve(1);

    print();

    return 0;
}