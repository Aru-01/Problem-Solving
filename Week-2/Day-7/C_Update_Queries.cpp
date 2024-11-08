// problem: https://codeforces.com/problemset/problem/1986/C

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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string update_string;
        cin >> update_string;
        sort(update_string.begin(), update_string.end());
        // cout << update_string << endl;
        int idx = 0;
        for (auto i : st)
        {
            s[--i] = update_string[idx];
            idx++;
        }
        cout << s << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}