// problem: https://leetcode.com/problems/combination-sum/
class Solution
{
public:
    void f(int i, vector<vector<int>> &ans, vector<int> &a, vector<int> &candidates, int target)
    {
        if (target == 0)
        {
            ans.push_back(a);
            return;
        }

        while (i < candidates.size() && target - candidates[i] >= 0)
        {
            a.push_back(candidates[i]);

            f(i, ans, a, candidates, target - candidates[i]);
            i++;
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> a;

        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

        f(0, ans, a, candidates, target);
        return ans;
    }
};

