class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0, ans = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            mp[nums[j]]++;

            
     while (mp[nums[j]] > 1) {
                mp[nums[i]]--;
                sum -= nums[i];

                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);

                i++;
            }
            if (j - i + 1 == k) {
                ans = max(ans, sum);

                mp[nums[i]]--;
                sum -= nums[i];

                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);

                i++;
            }
        }

        return ans;
    }
};