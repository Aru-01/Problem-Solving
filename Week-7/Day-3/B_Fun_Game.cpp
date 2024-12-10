// problem: https://codeforces.com/problemset/problem/1994/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            yes;
            continue;
        }

        int pos = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
                yes;
            else
                no;
        }
        else
            no;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}