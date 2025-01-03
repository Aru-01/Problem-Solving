// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> pre(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        pre[i] = sum;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;

        auto ans = lower_bound(pre.begin(), pre.end(), k);

        cout << (ans - pre.begin() + 1) << "\n";
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}