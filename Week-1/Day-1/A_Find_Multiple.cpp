#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << '\n';
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << -1 << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}