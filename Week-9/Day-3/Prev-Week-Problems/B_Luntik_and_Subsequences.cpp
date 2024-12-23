// problem: https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int zero = 0, one = 0;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
        if (i == 0)
            zero++;
        if (i == 1)
            one++;
    }
    cout << one * (1ll << zero) << '\n';
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