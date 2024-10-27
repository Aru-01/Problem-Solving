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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int firstPos = -1, lastPos = -1;

        firstPos = s.find('B');
        lastPos = s.rfind('B');

        cout << lastPos - firstPos + 1 << '\n';
    }

    return 0;
}