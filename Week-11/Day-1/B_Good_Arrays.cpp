// problem: https://codeforces.com/problemset/problem/1856/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll cnt = 0, sum = 0;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
        sum += i;
        if (i != 1)
            cnt++;
    }

    if (n == 1 || sum <= n)
    {
        no;
        return;
    }
    sum -= cnt;
    n -= cnt;

    if (n > (sum / 2))
        no;
    else
        yes;
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