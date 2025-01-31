// problem: https://codeforces.com/problemset/problem/1054/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    if (a[0] != 0)
    {
        dekhao(1);
        return;
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx + 1)
        {
            dekhao(i + 1);
            return;
        }
        mx = max(mx, a[i]);
    }

    dekhao(-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}