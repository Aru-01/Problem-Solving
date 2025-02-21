// problem: https://codeforces.com/problemset/problem/1033/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 1007;
int v[N][N];
bool vis[N][N];
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int n;

bool is_valid(int i, int j)
{
    return i >= 0 and i < n and j >= 0 and j < n and !vis[i][j] and !v[i][j];
}

void f(int i, int j)
{
    if (!is_valid(i, j))
        return;
    vis[i][j] = true;
    for (auto &[dx, dy] : moves)
    {
        f(i + dx, j + dy);
    }
}
void solve()
{
    int ax, ay;
    cin >> n >> ax >> ay;
    ax--, ay--;

    for (auto [dx, dy] : moves)
    {
        for (int i = (dx == 0 ? ay : ax); i < n and i >= 0; i += (dx == 0 ? dy : dx))
        {
            if (dx == 0)
            {
                v[ax][i] = true;
            }
            else
            {
                v[i][ay] = true;
            }
        }
    }

    moves.push_back({1, 1});
    moves.push_back({1, -1});
    moves.push_back({-1, 1});
    moves.push_back({-1, -1});

    cin >> ax >> ay;
    ax--;
    ay--;
    f(ax, ay);
    cin >> ax >> ay;
    ax--;
    ay--;
    if (vis[ax][ay])
        yes;
    else
        no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}