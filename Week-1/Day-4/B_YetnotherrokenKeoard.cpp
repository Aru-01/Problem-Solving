// problem: https://codeforces.com/problemset/problem/1907/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> cap, sml;
        vector<bool> flag(n, true);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (!cap.empty())
                {
                    flag[cap.back()] = false;
                    cap.pop_back();
                }
                flag[i] = false;
            }
            else if (s[i] == 'b')
            {
                if (!sml.empty())
                {
                    flag[sml.back()] = false;
                    sml.pop_back();
                }
                flag[i] = false;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap.push_back(i);
            }
            else
            {
                sml.push_back(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (flag[i])
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}