// problem: https://codeforces.com/problemset/problem/816/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;
const int N = 2e5 + 5;
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> dif(N);
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        dif[l]++;
        dif[r + 1]--;
    }

    for (int i = 1; i <= N; i++)
        dif[i] += dif[i - 1];

    for (int i = 1; i <= N; i++)
        dif[i] = (dif[i] >= k ? 1 : 0);

    for (int i = 1; i <= N; i++)
        dif[i] += dif[i - 1];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        dekhao(dif[b] - dif[a]);
    }
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