// problem: https://codeforces.com/problemset/problem/1948/A

#include <bits/stdc++.h>
#define ll long long
#define a cout << "AA"
#define b cout << "BB"
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
        if (n % 2 != 0)
            no;
        else
        {
            yes;
            int k = n / 2;
            for (int i = 1; i <= k; i++)
            {
                if (i % 2 == 0)
                    a;
                else
                    b;
            }
            cout << '\n';
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