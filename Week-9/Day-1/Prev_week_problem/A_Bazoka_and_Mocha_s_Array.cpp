// problem: https://codeforces.com/contest/1975/problem/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            cnt++;
    }

    if (cnt <= 1)
    {
        if (!cnt)
            yes;
        else
        {
            if (a[n - 1] <= a[0])
                yes;
            else
                no;
        }
    }
    else
        no;
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