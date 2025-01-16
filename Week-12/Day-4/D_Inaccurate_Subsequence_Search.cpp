// problem: https://codeforces.com/problemset/problem/1955/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    map<int, int> mp1, mp2;

    for (int &i : a)
        cin >> i;
    for (int &i : b)
    {
        cin >> i;
        mp1[i]++;
    }

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        mp2[a[i]]++;
        if (mp1[a[i]] && (mp2[a[i]] <= mp1[a[i]]))
            cnt++;
    }
    int ans = 0;
    if (cnt >= k)
        ans++;

    int l = 1, r = m;

    while (r < n)
    {
        mp2[a[l - 1]]--;

        if (mp1[a[l - 1]] && mp2[a[l - 1]] < mp1[a[l - 1]])
            cnt--;

        mp2[a[r]]++;
        if (mp1[a[r]] && mp2[a[r]] <= mp1[a[r]])
            cnt++;

        if (cnt >= k)
            ans++;

        l++;
        r++;
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