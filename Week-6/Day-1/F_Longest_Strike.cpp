// problem: https://codeforces.com/problemset/problem/1676/F

#include <bits/stdc++.h>
#define ll long long
#define minus cout << "-1\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            mp[v[i]]++;
        }
        set<int> st;
        for (auto [x, y] : mp)
        {
            if (y >= k)
                st.insert(x);
        }
        if (st.empty())
            minus;
        else
        {
            int ck_num = -1, l = 0, r = 0, mx = 0, cnt = 0;
            {
                for (int x : st)
                {
                    if (x == ck_num + 1)
                        cnt++;
                    else
                        cnt = 1;
                    if (cnt > mx)
                    {
                        mx = cnt;
                        l = x - cnt + 1;
                        r = x;
                    }
                    ck_num = x;
                }
            }
            cout << l << " " << r << "\n";
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