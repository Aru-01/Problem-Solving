// problem: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
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

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto low = lower_bound(a.begin(), a.end(), x);
        auto up = upper_bound(a.begin(), a.end(), x);

        if (low != a.begin())
            cout << *(--low) << ' ';
        else
            cout << "X ";

        if (up != a.end())
            cout << *up << "\n";
        else
            cout << "X\n";
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