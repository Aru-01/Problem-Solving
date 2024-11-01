// problem: https://codeforces.com/contest/1974/problem/B

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
        string s;
        cin >> s;
        // cout << s << endl;
        set<char> st;
        for (int i = 0; i < n; i++)
            st.insert(s[i]);

        // for (auto word : st)
        //     cout << word;
        // cout << endl;

        map<char, char> mp;
        auto reverse_it = st.rbegin();
        for (auto it = st.begin(); it != st.end(); it++)
        {
            mp[*it] = *reverse_it;
            reverse_it++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[s[i]];
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}