class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i;
        auto reverse = [](vector<int>& nums, int lo, int hi) {
                while (lo < hi) {
                swap(nums[lo++], nums[hi--]);
            }
        };
        for (i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) break;
        }
        reverse(nums, i, n - 1);
        if (i == 0) return;
        int lb = upper_bound(nums.begin() + i, nums.end(), nums[i - 1]) - nums.begin();
        swap(nums[i - 1], nums[lb]);
    }
};
