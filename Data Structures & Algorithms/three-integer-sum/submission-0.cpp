class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])       // skip duplicate fixed number
                continue;

            int target = -nums[i];
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[j] + nums[k];

                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[k]});   // ← SAVE the triplet
                    j++;                                           // ← move both
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;   // skip dup left
                    while (j < k && nums[k] == nums[k + 1]) k--;   // skip dup right
                }
                else if (sum < target) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return res;
    }
};