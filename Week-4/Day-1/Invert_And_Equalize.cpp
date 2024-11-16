// problem: https://www.codechef.com/problems/INVEQ

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
        string s;
        cin >> s;
        int i = 0, cnt0 = 0, cnt1 = 0;

        while (i < n)
        {
            if (s[i] == '0')
            {
                cnt0++;
                while (s[i] == '0')
                    i++;
            }
            if (s[i] == '1')
            {
                cnt1++;
                while (s[i] == '1')
                    i++;
            }
        }
        cout << min(cnt0, cnt1) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}