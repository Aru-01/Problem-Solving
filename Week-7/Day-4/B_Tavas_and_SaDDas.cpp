// problem: https://codeforces.com/problemset/problem/535/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
const ll maxN = 1e9 + 10;
vector<int> luck;
void luck_init(ll n)
{
    if (n > maxN)
        return;
    luck.push_back(n);
    luck_init(n * 10 + 4);
    luck_init(n * 10 + 7);
}
void solve()
{
    luck_init(0);
    int n;
    cin >> n;
    sort(luck.begin(), luck.end());
    for (int i = 0; i < luck.size(); i++)
    {
        if (luck[i] == n)
        {
            cout << i << "\n";
            break;
        }
    }
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