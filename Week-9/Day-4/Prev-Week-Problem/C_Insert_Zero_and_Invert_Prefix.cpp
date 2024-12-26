// problem: https://codeforces.com/problemset/problem/1839/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    if (a[n - 1] == 1)
    {
        no;
        return;
    }

    yes;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            if (i == 0 || a[i - 1] == 0)
            {
                ans.push_back(0);
            }

            else if (a[i - 1] == 1)
            {
                int j = i - 1, cnt = 0, temp, nxt;

                while (j >= 0 && a[j] == 1)
                {
                    cnt++;
                    nxt = j;
                    j--;
                }
                temp = cnt;
                while (cnt--)
                    ans.push_back(0);
                ans.push_back(temp);

                i = nxt + 1;
            }
        }
    }
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