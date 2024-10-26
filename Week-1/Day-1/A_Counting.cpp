#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;

    if (b < a)
    {
        cout << 0;
        return;
    }
    else
    {
        int n = b - a + 1;
        cout << n;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}