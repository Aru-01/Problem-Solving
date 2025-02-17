// problem: https://leetcode.com/problems/combination-sum-ii/
class Solution
{
public:
    void f(int idx, int target, vector<vector<int>> &ans, vector<int> &a, vector<int> &candidates)
    {
        if (target == 0)
        {
            ans.push_back(a);
            return;
        }
        if (target < 0 || idx >= candidates.size())
            return;

        for (int i = idx; i < candidates.size(); i++)
        {
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;
            a.push_back(candidates[i]);

            f(i + 1, target - candidates[i], ans, a, candidates);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> a;
        sort(candidates.begin(), candidates.end());

        f(0, target, ans, a, candidates);
        return ans;
    }
};
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
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