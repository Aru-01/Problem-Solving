// problem: https://codeforces.com/problemset/problem/1997/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        bool flag = false;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            ans += s[i];
            if (s[i] == s[i + 1] && !flag)
            {
                flag = true;
                if (s[i] != 'z')
                    ans += char(s[i] + 1);
                else
                    ans += 'a';
            }
        }

        if (!flag)
        {
            if (s[n - 1] == 'z')
                ans += 'a';
            else
                ans += char(s[n - 1] + 1);
        }

        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}