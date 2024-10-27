#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    vector<bool> flag(26, false);
    string missChar = "None";
    for (char c : s)
    {
        flag[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!flag[i])
        {
            missChar = 'a' + i;
            break;
        }
    }
    cout << missChar << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}