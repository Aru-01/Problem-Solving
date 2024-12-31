// problem: https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define no cout << "IMPOSSIBLE\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pi> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++)
    {
        int req_sum = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            int temp = a[l].first + a[r].first;

            if (temp == req_sum)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << '\n';
                return;
            }

            if (temp < req_sum)
                l++;
            else
                r--;
        }
    }
    no;
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