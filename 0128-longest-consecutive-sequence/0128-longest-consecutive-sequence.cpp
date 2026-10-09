class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        if (nums.size() == 0)
            return 0;

        int count = 1;
        int maxm = 1;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                continue;

            if (nums[i] == nums[i - 1] + 1) {
                count++;
            } else {
                count = 1;
            }
            maxm = max(maxm, count);
        }
        return maxm;
    }
};