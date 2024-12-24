// problem: https://codeforces.com/problemset/problem/1669/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);

    map<string, int> st_cnt;
    map<char, int> first_cnt, second_cnt;

    for (string &i : s)
    {
        cin >> i;

        st_cnt[i]++;
        first_cnt[i[0]]++;
        second_cnt[i[1]]++;
    }
    ll ans = 0;
    for (string &i : s)
    {
        int x = max(0, first_cnt[i[0]] - st_cnt[i]);
        ans += x;
        x = max(0, second_cnt[i[1]] - st_cnt[i]);
        ans += x;

        if (st_cnt[i] > 0)
            st_cnt[i]--;

        if (first_cnt[i[0]] > 0)
            first_cnt[i[0]]--;

        if (second_cnt[i[1]] > 0)
            second_cnt[i[1]]--;
    }

    cout << ans << '\n';
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