// problem: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            for (int c = 0; c <= s; c++)
            {
                if ((a + b + c) <= s && (a * b * c) <= t)
                    cnt++;
            }
        }
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}