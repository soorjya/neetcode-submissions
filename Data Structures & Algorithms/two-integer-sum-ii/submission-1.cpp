class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int l = 0, r = num.size() - 1;

        while (l < r) {
            int curSum = num[l] + num[r];

            if (curSum > target) {
                r--;
            } else if (curSum < target) {
                l++;
            } else {
                return { l + 1, r + 1 };
            }
        }
        return {};
    }
};