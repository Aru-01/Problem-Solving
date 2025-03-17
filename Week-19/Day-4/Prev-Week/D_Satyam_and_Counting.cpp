// problem: https://codeforces.com/problemset/problem/2009/D
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<pi> st;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        mp[x]++;
        st.insert({x, y});
    }

    ll ans = 0;
    for (auto i : mp)
        if (i.second == 2)
            ans += n - 2;

    for (auto i : st)
    {
        int j = i.first;
        int k = i.second;

        if ((st.find({j - 1, 1 - k}) != st.end()) && (st.find({j + 1, 1 - k}) != st.end()))
            ans++;
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