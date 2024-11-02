// problem: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size(), miss_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            miss_cnt++;
    }
    cout << miss_cnt << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}