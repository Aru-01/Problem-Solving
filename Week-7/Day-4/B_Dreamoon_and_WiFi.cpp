// problem: https://codeforces.com/problemset/problem/476/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{

    string Drazil, Dremoon;
    cin >> Drazil >> Dremoon;

    int n = Drazil.size(), Drazil_Pos = 0, Dremoon_pos = 0, unknown_com = 0;

    for (int i = 0; i < n; i++)
    {
        if (Drazil[i] == '+')
            Drazil_Pos++;

        if (Dremoon[i] == '+')
            Dremoon_pos++;

        if (Dremoon[i] == '?')
            unknown_com++;
    }

    int cnt = 0;
    // cout << (1 << unknown_com);
    for (int i = 0; i < (1 << unknown_com); i++)
    {
        int x = 0;
        for (int j = __lg(i); j >= 0; j--)
        {
            if ((1 << j) & i)
                x++;
        }
        if (x + Dremoon_pos == Drazil_Pos)
            cnt++;
    }
    cout << fixed << setprecision(12) << (double)cnt / (1 << unknown_com) << '\n';
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