// problem: https://vjudge.net/contest/682611#problem/L
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int &i : height)
        cin >> i;

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto low = lower_bound(height.begin(), height.end(), x);
        auto up = upper_bound(height.begin(), height.end(), x);

        if (low != height.begin())
            cout << *(--low) << " ";
        else
            cout << "X ";

        if (up != height.end())
            cout << *up << '\n';
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