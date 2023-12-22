#include <bits/stdc++.h>
using namespace std;

char cKey[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
int iKey[] = {1, 2, 3, 1, 2, 3, 1, 2, 3,
                1, 2, 3, 1, 2, 3, 1, 2, 3, 4,
                1, 2, 3, 1, 2, 3, 4, 1};
int T;
string sLine;

void input() {
    fflush(stdin);
    cin >> sLine;
}

int add(char a, char *cKey) {
    for (int i = 0; i < 25; i++) {
        if (cKey[i] == a) {
            return i;
        }
    }
    return -1;
}

int solve() {
    int res = 0;
    int n = sLine.length();
    for (int i = 0; i < n; i++) {
        res += iKey[add(sLine[i], cKey)];
    }
    return res;
}

int main() {
    ios::sync_with_stdio;
    cin.tie(0); cout.tie(0);

    cin >> T;
    for (int i = 0; i < T; i++) {
        input();
        cout << "Case #" << i + 1 << ": " << solve() << endl;
    }

    return 0;
}