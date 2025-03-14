// problem: https://leetcode.com/problems/permutations/
class Solution
{
public:
    void f(vector<int> &nums, vector<vector<int>> &ans, vector<int> &a, bool freq[])
    {
        if (nums.size() == a.size())
        {
            ans.push_back(a);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                a.push_back(nums[i]);
                freq[i] = 1;

                f(nums, ans, a, freq);
                freq[i] = 0;
                a.pop_back();
            }
        }
    };
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> a;
        bool freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;

        f(nums, ans, a, freq);
        return ans;
    }
};

