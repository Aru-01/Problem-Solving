// problem: https://codeforces.com/problemset/problem/1622/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        multiset<pair<int, int>> liked, disliked;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                liked.insert({a[i], i});
            }
            else
            {
                disliked.insert({a[i], i});
            }
        }

        // for (auto n : disliked)
        //     cout << n.first << " " << n.second << endl;

        int add = 1;
        vector<int> ans(n);
        for (auto song : disliked)
        {
            ans[song.second] = add;
            add++;
        }

        for (auto song : liked)
        {
            ans[song.second] = add;
            add++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}