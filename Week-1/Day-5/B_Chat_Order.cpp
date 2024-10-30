#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    map<string, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = ++cnt;
    }

    vector<pair<int, string>> v;

    for (auto [key, val] : mp)
    {
        v.push_back({val, key});
        // cout << key << "->" << val << "\n";
    }
    sort(v.rbegin(), v.rend());
    for (auto [val, key] : v)
        cout << key << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}