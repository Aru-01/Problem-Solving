// problem: https://leetcode.com/problems/subsets-ii/description/
class Solution
{
public:
    void f(int idx, vector<vector<int>> &ans, vector<int> &a, vector<int> &nums)
    {
        if (idx == nums.size())
        {
            ans.push_back(a);
            return;
        }

        a.push_back(nums[idx]);

        f(idx + 1, ans, a, nums);
        a.pop_back();

        int i = idx + 1;
        while (i < nums.size() && nums[i] == nums[i - 1])
            i++;
        f(i, ans, a, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> a;

        f(0, ans, a, nums);
        return ans;
    }
};