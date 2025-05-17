// problem: https://codeforces.com/contest/2109/problem/0
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

    int sum = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];

        if (i > 0 && a[i] == 0 && a[i - 1] == 0)
            flag = true;
    }

    if (sum > n - 1 || flag)
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