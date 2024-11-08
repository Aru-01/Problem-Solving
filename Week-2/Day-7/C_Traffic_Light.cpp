// problem: https://codeforces.com/problemset/problem/1744/C

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
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;
        s += s;
       
        set<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
                st.insert(i);
        }
        int ans = 0;

        // for (auto i : st)
        //     cout << i << ' ';
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                auto it = st.lower_bound(i);
                // cout << *it << " ";
                ans = max((*it - i), ans);
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}