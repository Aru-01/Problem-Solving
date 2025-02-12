// problem: https://codeforces.com/problemset/problem/1111/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

bool isVowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

void solve()
{
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        no;
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {

        s[i] = isVowel(s[i]) ? 'a' : 'b';
        t[i] = isVowel(t[i]) ? 'a' : 'b';
    }
    if (s == t)
        yes;
    else
        no;
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