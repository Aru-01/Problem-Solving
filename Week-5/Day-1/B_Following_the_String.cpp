// problem: https://codeforces.com/problemset/problem/1927/B

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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
        {
            cin >> i;
        }
        map<char, int> mp;
        char ch = 'a';
        for (int i : arr)
        {
            if (i == 0)
            {
                cout << ch;
                mp[ch]++;
                ch++;
            }
            else
            {
                for (auto [x, y] : mp)
                {
                    if (y == i)
                    {
                        cout << x;
                        mp[x]++;
                        break;
                    }
                }
            }
        }cout<<'\n';
    }
    // 0 0 0 1 0 2 0 3 1 1 4
    // a b c a d a e f b c a
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}