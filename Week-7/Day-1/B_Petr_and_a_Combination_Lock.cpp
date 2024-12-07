// problem: https://codeforces.com/problemset/problem/1097/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    bool ok = false;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
                sum += a[k];
            else
                sum -= a[k];
        }
        if (!(sum % 360))
        {
            ok = true;
            break;
        }
    }
    if (ok)
        yes;
    else
        no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}