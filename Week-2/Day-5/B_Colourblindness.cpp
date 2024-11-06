// problem: https://codeforces.com/problemset/problem/1722/B

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
        vector<char> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (!((a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G')))
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            no;
        else
            yes;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}