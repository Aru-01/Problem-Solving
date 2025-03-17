// problem: https://codeforces.com/problemset/problem/2008/E
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

    int ans = INT_MAX;

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 'a'; j <= 'z'; j++)
        {
            if (!(n % 2))
            {
                int cur = 0;
                for (int k = 0; k < n; k++)
                {
                    if (!(k % 2) && s[k] != i)
                        cur++;
                    if ((k % 2) && s[k] != j)
                        cur++;
                }
                ans = min(ans, cur);
            }
            else
            {
                vector<vector<int>> pre(2, vector<int>(n, 0));

                for (int k = 0; k < n; k++)
                {
                    if (k > 0)
                    {
                        pre[0][k] += pre[0][k - 1];
                        pre[1][k] += pre[1][k - 1];
                    }

                    if (!(k % 2))
                    {
                        if (s[k] != i)
                            pre[0][k]++;
                        if (s[k] != j)
                            pre[1][k]++;
                    }
                    else
                    {

                        if (s[k] != j)
                            pre[0][k]++;
                        if (s[k] != i)
                            pre[1][k]++;
                    }
                }
                int x = INT_MAX;
                for (int k = 0; k < n; k++)
                {
                    int cur = 1;
                    if (k > 0)
                        cur += pre[0][k - 1];

                    if (k < n - 1)
                        cur += (pre[1][n - 1] - pre[1][k]);
                    x = min(x, cur);
                }
                ans = min(ans, x);
            }
        }
    }
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