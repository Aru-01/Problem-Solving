// problem : https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    ll sml_odd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];

        if (arr[i] % 2 != 0)
        {
            sml_odd = min(sml_odd, arr[i]);
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << '\n';
        return;
    }
    else
    {
        if (sml_odd != INT_MAX)
        {
            cout << sum - sml_odd << "\n";
            return;
        }
        else
            cout << 0 << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}