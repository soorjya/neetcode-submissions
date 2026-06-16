class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(n);

        for (int i = 0; i < n; i++) {
            int mul = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    mul *= nums[j];
                }
            }
            out[i] = mul;
        }
        return out;
    }
};