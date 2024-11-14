// problem: https://codeforces.com/problemset/problem/1676/D

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

int n, m;
vector<vector<int>> mat;
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
ll sum(int i, int j, int dx, int dy)
{
    ll sum = 0;
    while (isValid(i, j))
    {
        sum += mat[i][j];
        i += dx;
        j += dy;
    }
    return sum;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        mat.assign(n, vector<int>(m));

        for (auto &it : mat)
        {
            for (auto &jt : it)
                cin >> jt;
        }
        vector<pair<int, int>> moves = {{-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
        ll ans = INT_MIN;

        // for (auto [x, y] : moves)
        //     cout << x << " " << y << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll val = mat[i][j];
                for (auto [dx, dy] : moves)
                {
                    val += sum(i + dx, j + dy, dx, dy);
                }
                ans = max(val, ans);
            }
        }
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