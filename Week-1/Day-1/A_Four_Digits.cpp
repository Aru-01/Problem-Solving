#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string num = to_string(n);

    while (num.size() < 4)
        num = "0" + num;

    cout << num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}