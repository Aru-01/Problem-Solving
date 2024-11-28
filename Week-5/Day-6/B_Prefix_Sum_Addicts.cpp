// problem: https://codeforces.com/problemset/problem/1738/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
       
        vector<ll> sum(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++)
        {
            cin >> sum[i];
        }
         if (n == 1 || k == 1)
        {
            yes;
            continue;
        }
        vector<ll> arr(n + 1);
        for (int i = n; i >= n - k + 2; i--)
        {
            arr[i] = sum[i] - sum[i - 1];
        }
        bool is_sorted = true;
        for (int i = n - k + 2; i <= n; i++)
        {
            if (i + 1 <= n && arr[i] > arr[i + 1])
            {
                is_sorted = false;
                break;
            }
        }

        if (!is_sorted)
        {
            no;
            continue;
        }

        for (int i = n - k + 1; i > 1; i--)
        {
            arr[i] = arr[i + 1];
            sum[i - 1] = sum[i] - arr[i];
        }
        arr[1] = sum[1];
        for (int i = 1; i <= n; i++)
        {
            if (i + 1 <= n && arr[i] > arr[i + 1])
            {
                is_sorted = false;
                break;
            }
        }
        if (is_sorted)
            yes;
        else
            no;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}