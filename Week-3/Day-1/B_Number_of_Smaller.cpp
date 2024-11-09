// problem: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0, cnt = 0;
    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
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