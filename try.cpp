#include <bits/stdc++.h>
using namespace std;

int n, k;
vector <int> curSubset;

//Hàm đệ quy
void printSubset()
{
    for (int i : curSubset) cout << i << " ";
    cout << "\n";
}

void genSubset(int pos)
{
    int lastNum = (curSubset.empty() ? 0 : curSubset.back());  //số cuối cùng được chọn
    for (int i = lastNum + 1; i <= n; i ++)
    {
        curSubset.push_back(i);
        if (curSubset.size() == k) printSubset();
        else genSubset(pos + 1);
        curSubset.pop_back();
    }
}

int main()
{
    cin >> n >> k;
    curSubset.clear();
    genSubset(1);

    return 0;
}