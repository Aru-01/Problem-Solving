// problem: https://codeforces.com/problemset/problem/1729/C

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
        string s;
        cin >> s;

        int n = s.size();

        vector<int> path;

        int step;
        if (s[0] < s.back())
            step = 1;
        else
            step = -1;

        if (step == 1)
        {
            for (char ch = s[0]; ch <= s.back(); ch++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == ch)
                    {
                        path.push_back(i + 1);
                    }
                }
            }
        }
        else
        {
            for (char ch = s[0]; ch >= s.back(); ch--)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == ch)
                    {
                        path.push_back(i + 1);
                    }
                }
            }
        }

        int cost = abs(s[0] - s.back());

        cout << cost << " " << path.size() << endl;
        for (int idx : path)
        {
            cout << idx << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
