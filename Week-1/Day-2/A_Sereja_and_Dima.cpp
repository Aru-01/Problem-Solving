#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    int sereja = 0, dima = 0, i = 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if (i % 2 != 0)
            sereja += mx;
        else
            dima += mx;

        if (left == mx)
            dq.pop_front();
        else
            dq.pop_back();

        i++;
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}