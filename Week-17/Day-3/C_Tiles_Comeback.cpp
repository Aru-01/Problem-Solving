// problem: https://codeforces.com/problemset/problem/1851/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    map<int, int> mp;
    int j = k, i;

    for (i = 0; i < n && j > 0; i++)
    {
        if (a[0] == a[i])
        {
            mp[a[0]]++;
            j--;
        }
    }

    while (i < n)
    {
        if (a[i] == a[n - 1])
        {
            mp[a[n - 1]]++;
        }
        i++;
    }

    if (mp[a[0]] < k || mp[a[n - 1]] < k)
        no;
    else
        yes;
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