// problem: https://codeforces.com/problemset/problem/1915/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e');
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans += s[i];
        else
        {
            if (!isVowel(s[i]) && !isVowel(ans.back()))
                ans += '.';

            if ((!isVowel(s[i]) && isVowel(ans.back())) && (isVowel(s[i + 1]) && i + 1 < n))
                ans += '.';

            ans += s[i];
        }
    }
    dekhao(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}