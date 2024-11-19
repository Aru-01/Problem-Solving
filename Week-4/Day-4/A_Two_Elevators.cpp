// problem: https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>
#define ll long long
#define one cout << "1\n"
#define two cout << "2\n"
#define three cout << "3\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans1 = a - 1;
        int ans2 = abs(b - c) + (c - 1);

        if (ans1 < ans2)
            one;
        else if (ans1 > ans2)
            two;
        else
            three;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}