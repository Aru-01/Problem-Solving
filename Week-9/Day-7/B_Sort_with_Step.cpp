// problem: https://codeforces.com/problemset/problem/1823/B
#include <bits/stdc++.h>
#define ll long long
#define zero cout << "0\n"
#define one cout << "1\n"
#define minus cout << "-1\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    vector<int> temp = a;
    sort(temp.begin(), temp.end());

    map<int, set<int>> mp1;
    for (int i = 0; i < n; i++)
        mp1[i % k].insert(a[i]);

    map<int, int> mp2;
    for (int i = 0; i < n; i++)
    {
        auto x = mp1[i % k];

        if (x.find(temp[i]) == x.end())
            mp2[i % k]++;
    }

    if (mp2.empty())
    {
        zero;
        return;
    }
    int cnt = 0;
    for (auto x : mp2)
    {
        if (x.second == 1)
            cnt++;
        else
            cnt += 10;
    }
    if (cnt == 2)
        one;
    else
        minus;
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