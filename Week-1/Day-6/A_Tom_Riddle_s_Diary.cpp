// problem: https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}