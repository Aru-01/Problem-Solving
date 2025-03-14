// problem: https://codeforces.com/problemset/problem/1932/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*' && s[i - 1] == '*')
            break;
        if (s[i] == '@')
            cnt++;
    }
    dekhao(cnt);
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