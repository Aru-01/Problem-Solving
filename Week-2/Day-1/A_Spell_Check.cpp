// problem:  https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s, t = "Timur";
        cin >> s;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}