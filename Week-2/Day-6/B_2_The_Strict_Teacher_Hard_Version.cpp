// problem: https://codeforces.com/problemset/problem/2005/B2

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        set<int> st;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        while (q--)
        {
            int david;
            cin >> david;

            if (david < *st.begin())
            {
                cout << *st.begin() - 1 << "\n";
                continue;
            }
            else if (david > *st.rbegin())
            {
                cout << n - *st.rbegin() << '\n';
                continue;
            }
            else
            {
                auto it = st.lower_bound(david);
                int right = *it;
                --it;
                int left = *it;
                // cout << left << " -" << right << endl;

                int mid = (left + right) / 2;
                // cout << mid << endl;

                int mn = min(abs(mid - left), abs(mid - right));
                cout << mn << '\n';
            }
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