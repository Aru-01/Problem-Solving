// problem: https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;

    set<int> lights;
    multiset<int> len;

    lights.insert(0);
    lights.insert(x);

    len.insert(x);

    while (n--)
    {
        int p;
        cin >> p;

        auto it = lights.upper_bound(p);
        int r = *it;
        it--;
        int l = *it;

        lights.insert(p);

        len.erase(len.find(r - l));

        len.insert(p - l);
        len.insert(r - p);

        cout << *len.rbegin() << " ";
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