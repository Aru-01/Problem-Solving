// problem: https://www.codechef.com/problems/MEBA

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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        if (n == 1)
            yes;
        else if (n == 2)
        {
            if (a[0] == a[1] || a[0] == 0 || a[1] == 0)
                yes;
            else
                no;
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 0)
                    continue;
                else
                {
                    if (a[i] != a[i + 1])
                    {
                        flag = false;
                    }
                }
            }
            if (flag)
                yes;
            else
                no;
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