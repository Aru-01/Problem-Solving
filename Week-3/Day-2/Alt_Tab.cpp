// problem: https://www.codechef.com/problems/ALTTAB

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    vector<string> tabs;
    while (t--)
    {
        string s;
        cin >> s;

        tabs.push_back(s);
    }
    reverse(tabs.begin(), tabs.end());
    set<string> st;
    string ans = "";
    for (auto s : tabs)
    {
        if (st.find(s) == st.end())
        {
            st.insert(s);
            int size = s.size();
            // cout << s[size-1] << "\n";

            ans += s[size - 2];
            ans += s[size - 1];
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}