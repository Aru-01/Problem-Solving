// problem: https://codeforces.com/problemset/problem/1975/A

#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
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
        for (int &i : arr)
            cin >> i;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                cnt++;
        }

        if (cnt <= 1)
        {
            if (!cnt)
                yes;
            else
            {
                if (arr[n - 1] <= arr[0])
                    yes;
                else
                    no;
            }
        }
        else
            no;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}