// problem: https://codeforces.com/contest/903/problem/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int box = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        box = max(box, mp[x]);
    }
    cout << box << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}