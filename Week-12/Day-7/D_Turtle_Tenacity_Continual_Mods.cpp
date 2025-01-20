// problem: https://codeforces.com/problemset/problem/1933/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    int mn = INT_MAX;
    for (int &i : a)
    {
        cin >> i;
        mp[i]++;
        mn = min(mn, i);
    }

    if (mp[mn] == 1)
    {
        yes;
        return;
    }
    for (int i : a)
    {
        if (i % mn != 0)
        {
            yes;
            return;
        }
    }
    no;
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