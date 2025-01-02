// problem: https://cses.fi/problemset/task/2216
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (pos[i] > pos[i + 1])
            ans++;
    }
    cout << ans << '\n';
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