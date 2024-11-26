// problem: https://codeforces.com/problemset/problem/1993/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

int func(vector<int> &odd, vector<int> &even)
{
    int n = even.size();
    ll mx = odd.back();
    if (even[0] > mx)
        return n + 1;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (even[i] > mx)
            return n + 1;
        else
        {
            ans++;
            mx += even[i];
        }
    }
    return ans;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        if (odd.size() == 0 || even.size() == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        else
        {
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            int ans = func(odd, even);
            cout << ans << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}