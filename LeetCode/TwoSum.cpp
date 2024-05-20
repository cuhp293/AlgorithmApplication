#include <bits/stdc++.h>
using namespace std;

int n, target, A[1000];

void input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> target;
}

void twoSum() {
    int result[100005];
    int count = 0;
    for(int i = n-1; i >= 2; i--) {
        int j = 0;

        while (j < i) {
            if (A[i] + A[j] == target) {
                result[count] = j;
                result[count + 1] = i;
                count = count + 2;
                j++;               
            } else if (A[i] + A[j] < target) {
                j++;
            }
        }
        cout << count << endl;
    }
    for (int i = 0; i < count; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();
    twoSum();

    return 0;
}