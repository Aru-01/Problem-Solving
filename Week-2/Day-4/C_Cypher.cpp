// problem: https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
#define ll long long
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
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            string s;
            cin >> num >> s;

            for (int j = 0; j < num; j++)
            {
                if (s[j] == 'D')
                {
                    if (a[i] != 9)
                    {
                        a[i]++;
                    }
                    else
                    {
                        a[i] = 0;
                    }
                }
                else
                {
                    if (a[i] != 0)
                    {
                        a[i]--;
                    }
                    else
                    {
                        a[i] = 9;
                    }
                };
            }
        }
        for (int v : a)
            cout << v << " ";
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