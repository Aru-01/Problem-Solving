// problem: https://codeforces.com/problemset/problem/2014/D
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n, m) cout << n << " " << m << "\n"
using namespace std;

void solve()
{
    int n, d, k;
    cin >> n >> d >> k;

    vector<pi> jobs(n + 1, {0, 0});

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        jobs[l].first++;
        jobs[r].second++;
    }

    int l = 1, r = 1, total = 0, mn = INT_MIN, mx = INT_MAX, bro, mom;


    while (r <= n)
    {

        if (r - l + 1 == d)
        {
            if (total > mn)
            {
                mn = total;
                bro = l;
            }
            if (total < mx)
            {
                mx = total;
                mom = l;
            }
            total -= jobs[l].second;
            l++, r++;
            total += jobs[r].first;
        }
        else
        {
            total += jobs[r].first;
            r++;
        }
    }

    dekhao(bro, mom);
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