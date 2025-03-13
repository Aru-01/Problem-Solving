// problem: https://codeforces.com/problemset/problem/1883/G1
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    a[0] = 1;

    for (int i = 1; i < n; i++)
        cin >> a[i];

    for (int &i : b)
        cin >> i;

    

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0, i = 0;

    
    while (i < n - ans)
    {
        while (a[i] >= b[i + ans] && i + ans < n)
            ans++;
        i++;
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