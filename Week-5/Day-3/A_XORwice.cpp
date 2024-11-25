// problem: https://codeforces.com/problemset/problem/1421/A

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a ^ b;
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
/**
 * test case :1
6    ->    12
16   8   4   2   1 deciToBina

0    0   1   1   0
0    1   1   0   0
---------------------
0    1   0   1   0 ===> 10


 * test case :2
4    ->    9
16   8   4   2   1 deciToBina.

0    0   1   0   0
0    1   0   0   1
---------------------
0    1   1   0   1 ===> 13

 * test case :3
28    ->    14
32   16   8   4   2   1 deciToBina.

0    1   1   1   0    0
0    0   1   1   1    0
------------------------------
0    1   0   0   1    0  ===> 18
 **/