// problem: https://codeforces.com/problemset/problem/1898/A
#include <bits/stdc++.h>
#define ll long long
#define zero cout << "0\n"
#define one cout << "1\n"
#define dekhao(n, c) cout << n << " " << c << "\n"
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int cnt = 0;
    for (char c : s)
        if (c == 'B')
            cnt++;

    if (cnt == k)
    {
        zero;
        return;
    }
    if (cnt > k)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                cnt--;
            x = i + 1;
            if (cnt == k)
                break;
        }
        one;
        dekhao(x, "A");
    }
    else
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                cnt++;
            x = i + 1;
            if (cnt == k)
                break;
        }
        one;
        dekhao(x, "B");
    }
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