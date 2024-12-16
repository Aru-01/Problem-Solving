// problem: https://codeforces.com/problemset/problem/1690/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;

    // bool ok = true;
    int dif = -1, z_dif = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            no;
            return;
        }
        if (b[i] == 0)
        {
            z_dif = max(z_dif, (a[i] - b[i]));
        }
        else
        {
            if (dif == -1)
                dif = a[i] - b[i];
            else
            {
                if (a[i] - b[i] != dif)
                {
                    no;
                    return;
                }
            }
        }
    }
    if (dif == -1 || z_dif <= dif)
        yes;
    else
        no;
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