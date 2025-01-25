// problem: https://codeforces.com/problemset/problem/1654/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    ll sum = 0;

    for (int &i : a)
    {
        cin >> i;
        sum += i;
        mp[i]++;
    }

    if (n == 1)
    {
        yes;
        return;
    };

    priority_queue<ll> pq;
    pq.push(sum);
    bool ok = true;

    while (!pq.empty())
    {
        ll temp = pq.top();
        pq.pop();

        ll x = temp / 2;
        ll y = temp - x;

        if (mp[x])
            mp[x]--;
        else if (x > 1)
            pq.push(x);

        if (mp[y])
            mp[y]--;
        else if (y > 1)
            pq.push(y);

        if (pq.size() > n + 2)
        {
            ok = false;
            break;
        }
    }
    for (int i : a)
    {
        if (mp[i])
        {
            ok = false;
            break;
        }
    }

    (ok ? yes : no);
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