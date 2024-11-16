// problem: https://www.codechef.com/problems/RCBCSK

#include <bits/stdc++.h>
#define ll long long
#define rcb cout << "RCB\n"
#define csk cout << "CSK\n"
using namespace std;
void solve()
{
    int r, c;
    cin >> r >> c;
    if ((r - c) >= 18)
        rcb;
    else
        csk;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}