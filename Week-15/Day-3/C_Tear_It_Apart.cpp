// problem: https://codeforces.com/problemset/problem/1821/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int mn = INT_MAX;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int cnt = 0, mx = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (i != s[j])
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
                cnt = 0;
        }
        mn = min(mn, mx);
    }
    if (mn == 0)
    {
        dekhao(0);
        return;
    }
    int cnt = 0;
    while (mn != 1)
    {
        mn /= 2;
        cnt++;
    }
    dekhao(cnt + mn);
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