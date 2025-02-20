// problem: https://codeforces.com/problemset/problem/862/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 1e5 + 5;
vector<int> a[N];
vector<ll> grp(2, 0);
vector<bool> vis(N, false);

void dfs(int src, int s)
{
    vis[src] = true;
    grp[s]++;
    for (auto ch : a[src])
    {
        if (!vis[ch])
        {
            vis[ch] = true;
            dfs(ch, 1 - s);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1, 0);

    ll ans =  (grp[0] * grp[1]) - (n - 1);
    dekhao(ans);
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