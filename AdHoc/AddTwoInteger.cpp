#include<bits/stdc++.h>
using namespace std;

string sum(string s1, string s2) {
	int n1 = s1.length(), n2 = s2.length();
	if (n1 > n2)
		swap(s1, s2);
	string s = "";

	int diff = n2 - n1;
	int carry = 0;

	for (int i = n1-1; i>=0; i--) {
		int sum = ((s1[i]-'0') + (s2[i+diff] - '0') + carry);
		s.push_back(sum%10 + '0');
		carry = sum / 10;
	}

	for (int i = diff-1; i>=0; i--) {
		int sum = ((s2[i] - '0') + carry);
		s.push_back(sum%10 + '0');
		carry = sum / 10;
	}

	if (carry)
		s.push_back(carry + '0');
	reverse(s.begin(), s.end());

	return s;
} 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	string a, b;
	cin >> a >> b;
	cout << sum(a, b);
	return 0;
}