// problem: https://codeforces.com/problemset/problem/1689/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int &i : p)
        cin >> i;

    if (n == 1)
    {
        no;
        return;
    }

    vector<int> q = p;
    sort(q.begin(), q.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (q[i] == p[i])
            swap(q[i], q[i + 1]);
    }
    if (q[n - 1] == p[n - 1])
        swap(q[n - 1], q[n - 2]);

    for (int i : q)
        cout << i << " ";
    cout << '\n';
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