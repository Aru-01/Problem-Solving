// problem: https://codeforces.com/problemset/problem/1104/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty())
        {
            if (s[i] == st.top())
            {
                cnt++;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }

    if (cnt % 2)
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