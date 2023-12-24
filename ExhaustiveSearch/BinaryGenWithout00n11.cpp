#include <bits/stdc++.h>
using namespace std;

int n;
string curString;

void BINARY_SEQUENCE_GEN(int pos) {
    if (pos > n) {
        cout << curString << endl;
        return;
    }
    
    for (char i = '0'; i <= '1'; i++) {
        if (curString.back() == i) {
            curString.push_back(i);
            curString.pop_back(); 
        } else {
            curString.push_back(i);
            BINARY_SEQUENCE_GEN(pos + 1);
            curString.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    curString = "";
    BINARY_SEQUENCE_GEN(1);

    return 0;
}