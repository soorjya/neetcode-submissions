class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<array<int, 2>> memo(nums.size());
        vector<array<bool, 2>> seen(nums.size(), {false, false});
        return dfs(nums, 0, false, memo, seen);
    }

private:
    int dfs(vector<int>& nums, int i, bool flag,
            vector<array<int, 2>>& memo, vector<array<bool, 2>>& seen) {
        if (i == nums.size() - 1) return flag ? max(0, nums[i]) : nums[i];
        int f = flag ? 1 : 0;
        if (seen[i][f]) return memo[i][f];
        if (flag)
            memo[i][f] = max(0, nums[i] + dfs(nums, i + 1, true, memo, seen));
        else
            memo[i][f] = max(dfs(nums, i + 1, false, memo, seen),
                             nums[i] + dfs(nums, i + 1, true, memo, seen));
        seen[i][f] = true;
        return memo[i][f];
    }
};