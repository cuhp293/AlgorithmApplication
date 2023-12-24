#include <bits/stdc++.h>
using namespace std;

int n, a[15];
long long S, curMoneySum = 0;
vector<int> curMoneySet, bestSet;

void input() {
    cin >> n >> S;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void printBestSet() {
    for (int i : bestSet)
        cout << a[i] << " ";
    cout << endl;
}

void genMoneySet(int pos) {
    int lastIndex = (curMoneySet.empty() ? 1 : curMoneySet.back());
    for (int i = lastIndex; i <= n; i++) {
        curMoneySet.push_back(i);
        curMoneySum += a[i];
        if (curMoneySum >= S) {
            if (curMoneySum == S) {
                bestSet.clear();
                for (int i : curMoneySet)
                    bestSet.push_back(i);
            }
        } else if (bestSet.empty() || curMoneySet.size() < bestSet.size())
            genMoneySet(pos + 1);

        curMoneySet.pop_back();
        curMoneySum -= a[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    curMoneySet.clear();
    bestSet.clear();
    genMoneySet(1);

    printBestSet();

    return 0;
}