// problem: https://codeforces.com/problemset/problem/1665/B

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
        vector<int> arr(n);
        map<int, int> mp;
        int mx_freq = 0;
        for (int &i : arr)
        {
            cin >> i;
            mp[i]++;
            mx_freq = max(mx_freq, mp[i]);
        }
        // cout << mx_freq << '\n';
        int op = 0;
        while (mx_freq < n)
        {
            int remaining = n - mx_freq;
            op++;
            op += min(remaining, mx_freq);
            mx_freq += min(remaining, mx_freq);
        }
        cout << op << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}