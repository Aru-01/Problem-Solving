// problem: https://codeforces.com/problemset/problem/2003/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<int> a(n);
    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a.size() == 1)
            break;

        if (i % 2 == 0)
            a.pop_front();
        else
            a.pop_back();
    }

    cout << a.front() << '\n';
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