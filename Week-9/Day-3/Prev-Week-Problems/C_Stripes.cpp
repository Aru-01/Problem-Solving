// problem: https://codeforces.com/problemset/problem/1742/C
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define R cout << "R\n"
#define B cout << "B\n"
using namespace std;

void solve()
{
    vector<string> grid(8);

    for (string &i : grid)
        cin >> i;

    for (string i : grid)
    {
        if (i == "RRRRRRRR")
        {
            R;
            return;
        }
    }
    B;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}