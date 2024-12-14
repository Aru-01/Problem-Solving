// problem: https://www.codechef.com/problems/STRAME
#include <bits/stdc++.h>
#define ll long long
#define Ramos cout << "Ramos\n"
#define Zlatan cout << "Zlatan\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (char w : s)
    {
        if (w == '1')
            cnt++;
    }
    int mn = min(cnt, n - cnt);

    if (mn % 2)
        Zlatan;
    else
        Ramos;
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