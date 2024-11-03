// problem: https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    multiset<int> mult;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mult.insert(x);
    }
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        auto it = mult.lower_bound(i);
        if (it != mult.end())
        {
            cnt++;
            mult.erase(it);
        }
    }

    cout << cnt << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}