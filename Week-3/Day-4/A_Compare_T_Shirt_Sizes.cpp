// problem: https://codeforces.com/problemset/problem/1741/A

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

        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "=\n";
            continue;
        }
        else
        {
            int n1 = a.size() - 1, n2 = b.size() - 1;

            if (a[n1] == 'S' && b[n2] == 'S')
            {
                if (n1 > n2)
                    cout << "<\n";
                else
                    cout << ">\n";
            }
            else if (a[n1] == 'L' && b[n2] == 'L')
            {
                if (n1 > n2)
                    cout << "> \n";
                else
                    cout << "< \n";
            }
            else if (a[n1] == b[n2])
            {
                if (n1 > n2)
                    cout << "> \n";
                else
                    cout << "< \n";
            }
            else if (a[n1] == 'L')
            {
                cout << "> \n";
            }
            else if (a[n1] == 'M')
            {
                if (b[n2] == 'S')
                    cout << "> \n";
                else
                    cout << "<\n";
            }
            else if (a[n1] == 'S')
            {
                cout << "<\n";
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}