// problem: https://codeforces.com/problemset/problem/1985/C

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &i : a)
            cin >> i;

        int cnt = 0;
        ll mx = INT_MIN, sum = 0;
        for (int i : a)
        {
            sum += i;
            mx = max(mx, (ll)i);
            if (sum - mx == mx)
                cnt++;
        }
        cout << cnt << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}