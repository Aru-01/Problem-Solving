// problem: https://codeforces.com/problemset/problem/2014/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k, gold = 0, cnt = 0;
    cin >> n >> k;

    vector<int> a(n);

    for (int &i : a)
    {
        cin >> i;
        if (i >= k)
            gold += i;

        if (i == 0 && gold > 0)
        {
            cnt++;
            gold--;
        }
    }
    dekhao(cnt);
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