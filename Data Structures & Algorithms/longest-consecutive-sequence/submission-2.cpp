class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            seen.insert(nums[i]);
        }

        int l = 0;

        for (int i = 0; i < nums.size(); i++) {
            int cur = nums[i];

            if (seen.find(cur - 1) == seen.end()) {
                int length = 1;
                int next = cur + 1;

                while (seen.find(next) != seen.end()) {
                    length++;
                    next++;
                }

                if (length > l) {
                    l = length;
                }
            }
        }
        return l;
    }
};
