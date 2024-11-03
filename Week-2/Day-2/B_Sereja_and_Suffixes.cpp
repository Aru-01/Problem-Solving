// problem: https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    set<int> st;
    for (int i = n; i > 0; i--)
    {
        st.insert(a[i]);
        cnt[i] = st.size();
    }

    for (int i = 0; i < m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}