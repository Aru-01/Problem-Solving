// problem: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans;
    for (auto val : v)
    {
        if (val != x)
            ans.push_back(val);
    }
    for (int v : ans)
        cout << v << " ";
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}