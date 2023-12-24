// Xếp n quân Hậu lên 1 bàn cờ (n x n), n <= 12

#include <bits/stdc++.h>
using namespace std;

int n;
// Mảng đánh dấu cột, đường chéo phụ (tổng), đường chéo chính (hiệu)
bool isInCol[13], isInDiagS[26], isInDiagM[26];
vector<int> curQueensSetX, curQueensSetY;


// In ra Kết quả dạng (x, y)
void printQueensSet() {
    for (int i = 0; i < n; i++) {
        cout << "(" << curQueensSetX[i] << ", " 
             << curQueensSetY[i] << ")";
        if (i < n-1)
            cout << ", ";
    }
    cout << endl;
}

void genQueensSet(int curRow) {
    for (int curCol = 1; curCol <= n; curCol++) {
        int curDiagS = curRow + curCol;
        int curDiagM = curRow - curCol + 13;

        if (isInCol[curCol] == true) continue;
        if (isInDiagS[curDiagS] == true) continue;
        if (isInDiagM[curDiagM] == true) continue;
        
        curQueensSetX.push_back(curRow);
        curQueensSetY.push_back(curCol);
        isInCol[curCol] = true;
        isInDiagS[curDiagS] = true;
        isInDiagM[curDiagM] = true;

        if (curQueensSetX.size() == n)
            printQueensSet();
        else
            genQueensSet(curRow + 1);

        curQueensSetX.pop_back();
        curQueensSetY.pop_back();
        isInCol[curCol] = false;
        isInDiagS[curDiagS] = false;
        isInDiagM[curDiagM] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    memset(isInCol, 0, sizeof(isInCol));
    memset(isInDiagS, 0, sizeof(isInDiagS));
    memset(isInDiagM, 0, sizeof(isInDiagM));

    genQueensSet(1);

    return 0;
}