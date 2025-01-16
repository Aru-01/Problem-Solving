// problem: https://codeforces.com/problemset/problem/1332/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] % allPrimes[j] == 0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }
    vector<int> ans(n);
    int color = 1;
    for (auto [x, y] : mp)
    {
        for (auto pos : y)
            ans[pos] = color;
        color++;
    }

    dekhao(mp.size());

    for (int i : ans)
        cout << i << " ";
    cout << '\n';
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

