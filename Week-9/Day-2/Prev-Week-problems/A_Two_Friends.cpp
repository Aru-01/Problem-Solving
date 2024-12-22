// problem: https://codeforces.com/problemset/problem/1969/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 2);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        int x = a[i];
        if (a[x] == i)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "2 \n";
    else
        cout << "3 \n";
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