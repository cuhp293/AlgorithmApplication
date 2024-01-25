// Tính C_k_n

#include <bits/stdc++.h>
using namespace std;

int n, k;
int A[1000];

void printSol(){
    for(int i = 1; i <= k; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
void gen(int pos) {
	for(int i = A[pos-1]+1; i <= n-k+pos; i++) {
        A[pos] = i;
        if(pos == k) {
            printSol();
        } else {
            gen(pos+1);
        }

	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> k >> n;
	gen(1);

	return 0;
}
