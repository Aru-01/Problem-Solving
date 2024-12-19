// problem: https://codeforces.com/problemset/problem/1582/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    set<char> st;
    for (char c : s)
        st.insert(c);
    vector<int> ans(26, INT_MAX);

    for (auto a : st)
    {
        int l = 0, r = n - 1, cnt = 0;

        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                if (s[l] == a)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == a)
                {
                    r--;
                    cnt++;
                }
                else
                {
                    cnt = -1;
                    break;
                }
            }
        }
        if (cnt != -1)
            ans[a - 'a'] = cnt;
    }
    sort(ans.begin(), ans.end());
    if (ans[0] == INT_MAX)
        no;
    else
        cout << ans[0] << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}