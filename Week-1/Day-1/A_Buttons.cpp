#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;

    int option1 = a + b;
    int option2 = a + (a - 1);
    int option3 = a + (b - 1);
    int option4 = b + (b - 1);
    int option5 = b + (a - 1);

    int mx = max({option1, option2, option3, option4, option5});

    cout << mx << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}