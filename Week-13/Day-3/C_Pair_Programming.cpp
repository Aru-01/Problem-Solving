// problem: https://codeforces.com/problemset/problem/1547/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> a(n), b(m);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;

    int i = 0, j = 0;
    bool ok = true;
    vector<int> ans;

    while (i < n || j < m)
    {
        if (i < n && a[i] <= k)
        {
            if (a[i] == 0)
                k++;
            ans.push_back(a[i]);
            i++;
        }
        else if (j < m && b[j] <= k)
        {
            if (b[j] == 0)
                k++;
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (!ok)
        no;
    else
    {
        for (int i : ans)
            cout << i << " ";
        cout << '\n';
    }
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