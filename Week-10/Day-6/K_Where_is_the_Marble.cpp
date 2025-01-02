// problem: https://vjudge.net/contest/682611#problem/K
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int t = 1;
    while (1)
    {
        int n, q;
        cin >> n >> q;

        vector<int> m(n);
        for (int &i : m)
            cin >> i;

        sort(m.begin(), m.end());

        if (q == 0)
            break;
        cout << "CASE# " << t << ":" << '\n';
        t++;
        while (q--)
        {
            int k;
            cin >> k;

            auto it = lower_bound(m.begin(), m.end(), k);

            if (it != m.end() && k == *it)
                cout << k << " found at " << (it - m.begin()) + 1 << '\n';
            else
                cout << k << " not found\n";
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