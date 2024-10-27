#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int a, b, t;
    cin >> a >> b >> t;

    int x = (t + .5) / a;

    int total_Biscit = x * b;
    cout << total_Biscit << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}