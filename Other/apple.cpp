#include <bits/stdc++.h>
using namespace std;

int N;
int A[1000];
int total = 0;
int minDiff = INT_MAX;

int findMin() {

    int target = total / 2;
    bool bMark[target + 1];
    for(int i = 0; i <= target; i++) {
        bMark[i] = false;
    }
    bMark[0] = true;

    for (int i = 0; i < N; i++) {
        for (int j = target - A[i]; j >= 0; j--) {
            if (bMark[j]) {
                bMark[j + A[i]] = true;
            }
        }
    }

    for(int i = target; i >= 0; i--) {
        if (bMark[i]) {
            minDiff = total - 2*i;
            break;
        }
    }

    return minDiff;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }

    cout << findMin() << endl;

    return 0;
}
