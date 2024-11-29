// problem: https://codeforces.com/problemset/problem/1860/A

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
        string s;
        cin >> s;
        // cout << s << " \n";
        if (s == "()")
        {
            no;
            continue;
        }
        int sz = s.size();
        bool flag = false;
        for (int i = 0; i < sz - 1; i++)
        {
            if ((s[i] == '(' && s[i + 1] == '(') || (s[i] == ')' && s[i + 1] == ')'))
                flag = true;
        }
        string ans = "";
        if (flag)
        {
            for (int i = 0; i < sz; i++)
                ans += "()";
        }
        else
        {
            for (int i = 0; i < sz; i++)
                ans += "(";
            for (int i = 0; i < sz; i++)
                ans += ")";
        }
        yes;
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