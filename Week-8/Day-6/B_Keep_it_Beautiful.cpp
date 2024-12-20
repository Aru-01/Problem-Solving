// problem: https://codeforces.com/problemset/problem/1841/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    string ans = "";

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (a.empty())
        {
            ans += '1';
            a.push_back(x);
        }
        else
        {
            if (ok)
            {
                if (x >= a.back())
                {
                    ans += '1';
                    a.push_back(x);
                }
                else
                {
                    if (x > a[0])
                        ans += '0';
                    else
                    {
                        ok = false;
                        ans += '1';
                        a.push_back(x);
                    }
                }
            }
            else
            {
                if (x < a.back())
                    ans += '0';
                else
                {
                    if (x > a[0])
                        ans += '0';
                    else
                    {
                        ans += '1';
                        a.push_back(x);
                    }
                }
            }
        }
    }

    cout << ans << '\n';
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