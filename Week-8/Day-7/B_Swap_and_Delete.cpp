// problem: https://codeforces.com/problemset/problem/1913/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int one = 0, zero = 0;
    for (char c : s)
    {
        if (c == '1')
            one++;
        else
            zero++;
    }
    for (char c : s)
    {
        if (c == '1')
        {
            if (zero > 0)
                zero--;
            else
                break;
        }
        else
        {
            if (one > 0)
                one--;
            else
                break;
        };
    }

    cout << one + zero << "\n";
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