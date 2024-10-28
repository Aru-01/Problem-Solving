
// problem : https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string n, m;
        cin >> n >> m;
        // cout << n << " " << m << '\n';
        mp[{n, m}] = true;
    }

    /** for (auto [key, val] : mp)
     {
         string a = key.first, b = key.second;
         cout << a << " " << b << " " << val << "\n";
     } */
    cout << mp.size() << '\n';
    return 0;
}