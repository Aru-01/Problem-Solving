// problem:

#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    // cout << x << "-" << y << "-" << z << endl;
    double score_A = (x * 1 + y * .5), score_B = (z * 1 + y * .5);
    int match = 4 - x - y - z;

    if (score_A > score_B)
        yes;
    else if (score_B >= match + score_A)
        no;
    else
        yes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}