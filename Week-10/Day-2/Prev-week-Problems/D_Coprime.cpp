// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

vector<int> cop[1010];
void cop_initaialize()
{

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
                cop[i].push_back(j);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    n++;
    vector<int> a(n);
    for (int i = 1; i < n; i++)
        cin >> a[i];

    vector<int> mx_idx(1010, -1);
    for (int i = 1; i < n; i++)
    {
        mx_idx[a[i]] = i;
    }

    int ans = -1;

    for (int i = 1; i <= 1000; i++)
    {
        if (mx_idx[i] == -1)
            continue;

        if (i == 1)
        {
            ans = max(ans, 2 * mx_idx[i]);
            continue;
        }
        for (auto p : cop[i])
        {
            if (mx_idx[p] != -1)
                ans = max(ans, mx_idx[i] + mx_idx[p]);
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cop_initaialize();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}