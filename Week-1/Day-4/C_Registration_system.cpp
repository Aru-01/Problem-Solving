// problem : https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK\n";
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

    return 0;
}