// problem: https://codeforces.com/problemset/problem/1729/B

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
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                ans += s[i] - '0' + 'a' - 1;
            }
            else
            {
                string num;
                num += s[i - 2];
                num += s[i - 1];
                int x = stoi(num);
                ans += 'a' - 1 + x;
                i -= 2;
            }
        }
        reverse(ans.begin(), ans.end());
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
