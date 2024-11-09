// problem: https://www.codechef.com/problems/MNR

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int mn = INT_MAX;

        mn = min(mn, v[n - 1] - v[2]);
        mn = min(mn, v[n - 2] - v[1]);
        mn = min(mn, v[n - 3] - v[0]);

        cout << mn << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}