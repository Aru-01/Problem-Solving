// problem: https://codeforces.com/problemset/problem/1399/C
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
    sort(a.begin(), a.end());
    int ans = 0;

    for (int i = 2; i <= n * 2; i++)
    {
        int cnt = 0, l = 0, r = n - 1;

        while (l < r)
        {
            int sum = a[l] + a[r];
            if (sum == i)
            {
                cnt++;
                l++;
                r--;
            }
            else if (sum > i)
                r--;
            else
                l++;
        }
        ans = max(cnt, ans);
    }
    dekhao(ans);
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