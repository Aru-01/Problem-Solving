// problem: https://codeforces.com/problemset/problem/1922/A

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
        string a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {

            if (a[i] != c[i] && b[i] != c[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            yes;
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