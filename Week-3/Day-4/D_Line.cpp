// problem: https://codeforces.com/problemset/problem/1722/D

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
        string s;
        cin >> s;

        ll score = 0;
        int cng = 0;
        vector<ll> cngList;
        for (int i = 0; i < n; i++)
        {
            int l = i, r = n - i - 1;

            if (s[i] == 'L')
            {
                if (r > l)
                {
                    cng++;
                    score += r;
                    cngList.push_back(r - l);
                }
                else
                    score += l;
            }
            else
            {
                if (l > r)
                {
                    cng++;
                    score += l;
                    cngList.push_back(l - r);
                }
                else
                    score += r;
            }
        }
        vector<ll> ans(n + 1);
        for (int i = cng; i <= n; i++)
        {
            ans[i] = score;
        }

        sort(cngList.begin(), cngList.end(), greater<ll>());

        for (int i = cng - 1; i >= 1 ; i--)
        {
            score -= cngList.back();
            cngList.pop_back();
            ans[i] = score;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}