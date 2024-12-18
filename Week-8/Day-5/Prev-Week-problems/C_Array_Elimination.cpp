// problem: https://codeforces.com/problemset/problem/1602/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), res(33), ans;
    for (int &i : a)
        cin >> i;
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] & (1 << i))
                res[i]++;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        bool ok = true;
        for (int j = 0; j <= 32; j++)
        {
            if (res[j] % i != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end());

    for (int i : ans)
        cout << i << " ";
    cout << "\n";
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
