// problem: https://codeforces.com/problemset/problem/1714/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.find(a[i]) != st.end())
            {
                cnt = i + 1;
                break;
            }
            else
                st.insert(a[i]);
        }

        cout << cnt << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}