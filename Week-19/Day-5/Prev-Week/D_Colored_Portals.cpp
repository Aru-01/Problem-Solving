// problem: https://codeforces.com/problemset/problem/2004/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

vector<string> vec = {"BG", "BR", "BY", "GR", "GY", "RY"};

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<string> s(n);
    for (string &i : s)
        cin >> i;

    vector<int> a[6];

    for (int i = 0; i < n; i++)
    {
        if (s[i] == "BG")
            a[0].push_back(i);

        if (s[i] == "BR")
            a[1].push_back(i);

        if (s[i] == "BY")
            a[2].push_back(i);

        if (s[i] == "GR")
            a[3].push_back(i);

        if (s[i] == "GY")
            a[4].push_back(i);

        if (s[i] == "RY")
            a[5].push_back(i);
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        set<char> st;
        for (int i = 0; i < 2; i++)
        {
            st.insert(s[x][i]);
            st.insert(s[y][i]);
        }

        if (st.size() < 4)
        {
            dekhao(abs(x - y));
            continue;
        }

        if (y < x)
            swap(x, y);

        int l = -1, r = n;

        for (int i = 0; i < 6; i++)
        {
            if (vec[i] == s[x] || vec[i] == s[y])
                continue;

            auto low = lower_bound(a[i].begin(), a[i].end(), x);
            auto up = upper_bound(a[i].begin(), a[i].end(), x);

            if (low != a[i].begin())
            {
                low--;
                l = max(l, *low);
            }

            if (up != a[i].end())
                r = min(r, *up);
        }
        int ans = 0;

        if (l == -1 && r == n)
            ans = -1;
        else if (l == -1)
            ans = abs(x - r) + abs(y - r);
        else if (r == n)
            ans = abs(x - l) + abs(y - l);
        else
            ans = min(abs(x - l) + abs(y - l), abs(x - r) + abs(y - r));

        dekhao(ans);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}