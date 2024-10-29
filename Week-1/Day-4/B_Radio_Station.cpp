#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    map<string, string> mp;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }
    while (q--)
    {
        string name, ip;
        cin >> name >> ip;
        ip.pop_back();
        cout << name << " " << ip << "; #" << mp[ip] << '\n';
    }

    return 0;
}