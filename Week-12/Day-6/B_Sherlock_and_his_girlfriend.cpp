// problem: https://codeforces.com/problemset/problem/776/B
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
    vector<int> ans;

    auto isPrime = [&](int x)
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
                return false;
        }
        return true;
    };

    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime(i))
            ans.push_back(1);
        else
            ans.push_back(2);
    }

    cout << (n < 3 ? 1 : 2) << '\n';
    for (int i : ans)
        cout << i << " ";
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