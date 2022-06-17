class Solution {
   public:
    void nextPermutation(vector<int> &nums) {
        int len = nums.size(), k = 0, l = 0;
        for (k = len - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) break;
        }
        if (k < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (l = len - 1; l > k; l--) {
                if (nums[l] > nums[k]) break;
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};