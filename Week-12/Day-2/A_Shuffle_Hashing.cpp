// problem: https://codeforces.com/problemset/problem/1278/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    string p, h;
    cin >> p >> h;

    sort(p.begin(), p.end());

    int p_size = p.size();
    int h_size = h.size();

    bool ok = false;

    for (int i = 0; i <= h_size - p_size; i++)
    {
        string temp = h.substr(i, p_size);
        sort(temp.begin(), temp.end());
        if (temp == p)
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
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}