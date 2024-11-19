// problem: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int l = 0, r = 0;
    ll ans = 0, sum = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= k)
        {
            ans += n - r;
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}