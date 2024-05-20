#include <bits/stdc++.h>
using namespace std;

string str;

string solve() {
    // Mảng lưu vị trí xuất hiện của mỗi ký tự, mảng kích thước 128, tất cả bằng -1
    vector<int> charMap(128, -1);
    int maxLength = 0;
    int start = 0, maxStart = 0;

    for (int end = 0; end < str.length(); end++) {
        if (charMap[str[end]] != -1) {
            // Di chuyển start tới vị trí sau ký tự trùng lặp
            start = max(start, charMap[str[end]] + 1);
        }
        // Cập nhật vị trí xuất hiện mới nhất của ký tự
        charMap[str[end]] = end;

        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
            maxStart = start;
        }
    }

    return str.substr(maxStart, maxLength);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> str;
    cout << solve() << endl;

    cout << str;
    return 0;
}