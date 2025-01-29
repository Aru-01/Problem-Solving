// problem: https://codeforces.com/problemset/problem/1973/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    vector<int> p(3);
    int sum = 0;
    for (int &i : p)
    {
        cin >> i;
        sum += i;
    }

    if (sum % 2 == 1)
    {
        no;
        return;
    }
    int ans = min(sum / 2, p[0] + p[1]);
    dekhao(ans);
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