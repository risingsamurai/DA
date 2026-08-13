/*EVERY PATTERN FOLLOWED ACROSS PREVIOUS PREFIX SUMS 560 , SUM OF TARGET exact copy of 560 subarray k */
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int sum=0;
        int result=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];    
            result+=mp[sum-goal];
            mp[sum]++;
        }
      return result;  
    }
}; 