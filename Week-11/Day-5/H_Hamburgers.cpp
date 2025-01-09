// problem: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    string s;
    ll nb, ns, nc, pb, ps, pc, rubles;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> rubles;

    // cout << s << " " << nb << " " << ns << " " << nc << " " << pb << " " << ps << " " << pc << " " << rubles << '\n';
    ll cnt_b = 0, cnt_s = 0, cnt_c = 0;
    for (char c : s)
    {
        if (c == 'B')
            cnt_b++;
        if (c == 'S')
            cnt_s++;
        if (c == 'C')
            cnt_c++;
    }

    auto ok = [&](ll mid)
    {
        ll need_b = max((ll)0, cnt_b * mid - nb);
        ll need_s = max((ll)0, cnt_s * mid - ns);
        ll need_c = max((ll)0, cnt_c * mid - nc);

        ll total = (need_b * pb) + (need_c * pc) + (need_s * ps);

        return total <= rubles;
    };

    ll l = 0, r = rubles + 100, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    dekhao(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}