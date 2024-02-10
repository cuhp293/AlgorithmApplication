#include <bits/stdc++.h>
using namespace std;

int n, k;
int A[1000];
int tmp = 0;
bool bMark[1000];

void printSol(){
    for(int i = 1; i <= k; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void findArr() {
    sort(A, A+n);
    for(int i = 0; i < n-2; ++i) {
        int a = A[i];
        int left = i+1;
        int right = n-1;

        while (left < right) {
            int b = A[left];
            int c = A[right];

            if (b + c == a) {
                tmp++;
                ++left;
                --right;
            } else if (b + c < a) {
                ++left;
            } else {
                --right;
            }
        }
    }
    cout << tmp;
}

void threeFor() {
    tmp = 0;
    for(int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int c = A[i] - A[j];
            if (c >= 0 && c < n && !bMark[c]) {
                tmp++;
                bMark[c] = true;
            }
        }
    }
    cout << tmp;
}
void find() {
    sort(A, A+n);

    for(int i = n-1; i >= 2; i--) {
        int b = 0;
        int c = i-1;

        while (b < c) {
            if (A[b] + A[c] == A[i]) {
                tmp++;
                b++;
                c--;
            } else if (A[b] + A[c] < A[i]) {
                b++;
            } else {
                c--;
            }
        }
    }
    cout << tmp;
}

void sort() {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A, A+n);
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
        cin >> A[i];
        bMark[i] = false;
	}
	findArr();

	return 0;
}
