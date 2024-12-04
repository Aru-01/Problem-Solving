// problem: https://codeforces.com/problemset/problem/1977/A

#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n < m)
            no;
        else
        {
            int dif = n - m;
            if (dif % 2)
                no;
            else
                yes;
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