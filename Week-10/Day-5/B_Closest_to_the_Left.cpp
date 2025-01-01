// problem: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "0\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    while (k--)
    {
        int key;
        cin >> key;
        if (a[0] > key)
            no;
        else
        {
            int l = 0, r = n - 1, mid, ans = 0;

            while (l <= r)
            {
                mid = (l + r) / 2;
                if (a[mid] <= key)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            cout << ans + 1 << '\n';
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