// Tính C_k_n

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> curSubset; // Vector lưu trữ tổ hợp hiện tại


// In ra tổ hợp hiện tại
void printSubset() {
    for (int i : curSubset)
        cout << i << " ";
    cout << endl;
}

// Thêm từng số vào curSubset đến khi đủ k
void genSubset(int pos) {

    /* curSubset.empty() trả về true nếu rỗng, false nếu không rỗng
    ? khi curSubset.empty() return true
    : khi curSubset.back() return false (trả về phần tử cuối cùng của curSubset)
    */
    int lastNum = (curSubset.empty() ? 0 : curSubset.back());
    for (int i = lastNum+1; i <= n; i++) {
        curSubset.push_back(i);
        if (curSubset.size() == k)
            printSubset();
        else
            genSubset(pos + 1);
        curSubset.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;
    curSubset.clear();
    genSubset(1);

    return 0;
}