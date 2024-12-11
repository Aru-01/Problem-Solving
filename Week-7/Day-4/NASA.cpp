// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

const int maxN = 1LL << 15;
vector<int> allPalindrome;

bool isPalindrome(int x)
{
    string s = to_string(x), t;
    t = s;
    reverse(t.begin(), t.end());
    // cout << s << " " << t << "\n";
    return s == t;
}
void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
            allPalindrome.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindrome.size(); j++)
        {
            int cur = (a[i] ^ allPalindrome[j]);
            ans += cnt[cur];
        }
    }
    cout << ans / 2 << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    markPalindrome();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}