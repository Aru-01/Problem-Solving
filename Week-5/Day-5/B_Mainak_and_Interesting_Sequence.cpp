// problem: https://codeforces.com/problemset/problem/1726/B

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
        int n, m;
        cin >> n >> m;

        if (n > m)
            no;
        else
        {
            vector<int> a(n);
            int sum = 0;
            if (n % 2 == 0 && m % 2 == 0)
            {
                yes;
                for (int i = 0; i < n - 2; i++)
                {
                    a[i] = 1;
                    sum++;
                }
                a[n - 2] = (m - sum) / 2;
                a[n - 1] = a[n - 2];
            }
            else if (n % 2 == 0 && m % 2 == 1)
            {
                no;
                continue;
            }
            else
            {
                yes;
                for (int i = 0; i < n - 1; i++)
                {
                    a[i] = 1;
                    sum++;
                }
                a[n - 1] = m - sum;
            }
            for (int i : a)
                cout << i << " ";
            cout << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}