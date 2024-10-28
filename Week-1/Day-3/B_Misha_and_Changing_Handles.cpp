
// problem : https://codeforces.com/problemset/problem/501/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, string> ans, has;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (has.find(a) != has.end())
        {
            string same = has[a];
            ans[same] = b;
            has.erase(same);
            has[b] = same;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }

    cout << ans.size() << "\n";
    for (auto [key, value] : ans)
    {
        cout << key << " " << value << "\n";
    }
    return 0;
}