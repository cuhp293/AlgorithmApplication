#include <bits/stdc++.h>
using namespace std;

int n;
int A[1000];
bool bMark[1000];

void printSol(){
    for(int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
void gen(int pos) {
	for(int i = 1; i <= n; i++) {
        if(!bMark[i]) {
            A[pos] = i;
            bMark[i] = true;
            if(pos == n) {
                printSol();
            } else {
                gen(pos+1);
            }
            bMark[i] = false;
        }
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i <= n; i++) {
        bMark[i] = false;
	}
	gen(1);

	return 0;
}
