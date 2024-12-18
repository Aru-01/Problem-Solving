// problem: https://codeforces.com/problemset/problem/1977/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;

    while (n)
    {
        if (n % 2 == 0)
            ans.push_back(0);
        else
            ans.push_back(1);

        n /= 2;
    }
    ans.push_back(0);

    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == 1 && ans[i + 1] == 1)
        {
            for (int j = i; j < ans.size(); j++)
            {
                if (ans[j] == 0)
                {
                    ans[j] = 1;
                    ans[i] = -1;
                    break;
                }
                else
                {
                    ans[j] = 0;
                }
            }
        }
    }
    cout << ans.size() << '\n';
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