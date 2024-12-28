// problem: https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO SOLUTION\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;

    map<char, int> cnt;
    for (char i : s)
        cnt[i]++;

    int odd = 0;
    for (auto [key, val] : cnt)
    {
        if (val % 2)
            odd++;
    }
    if (odd > 1)
    {
        no;
        return;
    }
    string first, mid, last;
    for (auto [key, val] : cnt)
    {
        if (val % 2)
            mid.push_back(key);

        for (int i = 0; i < val / 2; i++)
        {
            first.push_back(key);
            last.push_back(key);
        }
    }
    reverse(last.begin(), last.end());
    cout << first << mid << last << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}