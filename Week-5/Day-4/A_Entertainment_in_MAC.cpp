// problem: https://codeforces.com/problemset/problem/1935/A

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
        string s;
        cin >> n >> s;
        bool flag = true;
        int k = s.size();

        for (int i = 0; i < k / 2; i++)
        {
            if (s[i] == s[k - i - 1])
                continue;
            if (s[i] > s[k - i - 1])
                flag = false;
            else
                break;
        }

        if (flag)
            cout << s << '\n';
        else
        {
            string r = s;
            reverse(r.begin(), r.end());
            cout << r << s << '\n';
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