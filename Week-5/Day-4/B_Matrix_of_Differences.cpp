// problem: https://codeforces.com/problemset/problem/1783/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        int sm = 1, lg = n * n;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {
                        a[i][j] = lg;
                        lg--;
                    }
                    else
                    {
                        a[i][j] = sm;
                        sm++;
                    }
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (j % 2 == 0)
                    {
                        a[i][j] = sm;
                        sm++;
                    }
                    else
                    {
                        a[i][j] = lg;
                        lg--;
                    }
                }
            }
        }
        for (auto x : a)
        {
            for (auto v : x)
                cout << v << " ";
            cout << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}