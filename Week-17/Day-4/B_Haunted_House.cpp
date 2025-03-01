// problem: https://codeforces.com/problemset/problem/1884/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    ll one = 0, ans = 0, cnt = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            one++;
        else
        {
            ans += one;
            dekhao(ans);
            cnt--;
        }
    }
    while (cnt--)
        dekhao(-1);
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