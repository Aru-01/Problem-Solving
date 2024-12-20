// problem: https://codeforces.com/problemset/problem/1760/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

ll Inversion_cnt(vector<int> a, int n)
{
    ll one = 0, res = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        else
            res += one;
    }

    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    ll ans = Inversion_cnt(a, n);
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            idx = i;
            a[i] = 1;
            break;
        }
    }
    ans = max(ans, Inversion_cnt(a, n));

    if (idx != -1)
        a[idx] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            break;
        }
    }
    ans = max(ans, Inversion_cnt(a, n));

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