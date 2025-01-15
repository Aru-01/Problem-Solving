// problem: https://codeforces.com/problemset/problem/1881/D
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

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
            cnt[a[i]]++;
    }

    bool ok = true;
    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        yes;
    else
        no;
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