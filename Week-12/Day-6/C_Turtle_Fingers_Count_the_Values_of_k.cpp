// problem: https://codeforces.com/problemset/problem/1933/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;

    int x = 1;
    set<int> st;

    while (1)
    {
        int y = 1;

        while (1)
        {
            st.insert(l / (x * y));
            y *= b;
            if (l % (x * y) != 0)
                break;
        }

        x *= a;
        if (l % x != 0)
            break;
    }

    dekhao(st.size());
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