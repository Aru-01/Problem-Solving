// problem: https://codeforces.com/problemset/problem/1304/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n, ans) cout << n << "\n" \
                            << ans << '\n'
using namespace std;

bool isPalindrom(string s)
{
    int l = 0, r = s.size() - 1;

    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++, r--;
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (auto &i : s)
        cin >> i;

    string ans = "", mid = "";
    deque<string> last;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (isPalindrom(s[i]) && !ok)
        {
            mid += s[i];
            ok = true;
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            string temp = s[j];
            reverse(temp.begin(), temp.end());

            if (s[i] == temp)
            {
                last.push_front(s[j]);
                ans += s[i];
            }
        }
    }

    if (ok)
        ans += mid;

    for (auto i : last)
        ans += i;
    dekhao(ans.size(), ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}
