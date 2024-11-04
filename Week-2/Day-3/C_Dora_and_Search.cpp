// problem: https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            st.insert(i);
        }
        int l = 1, r = n;

        while (l <= r)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();
            bool flage = false;

            if (mn == a[l] || mx == a[l])
            {
                st.erase(a[l]);
                l++;
                flage = true;
            }

            if (mx == a[r] || mn == a[r])
            {
                st.erase(a[r]);
                r--;
                flage = true;
            }

            if (!flage)
                break;
        }

        if (l > r)
        {
            cout << "-1\n";
        }
        else
        {
            cout << l << " " << r << '\n';
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