// problem: https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, customer = 1;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mult;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;

            st.insert({customer, money});
            mult.insert({money, -customer});
            customer++;
        }
        else if (type == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            mult.erase({money, -pos});
            st.erase({pos, money});
        }
        else
        {
            int pos = -mult.rbegin()->second, money = mult.rbegin()->first;
            ans.push_back(pos);
            mult.erase({money, -pos});
            st.erase({pos, money});
        }
    }
    for (int v : ans)
        cout << v << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}