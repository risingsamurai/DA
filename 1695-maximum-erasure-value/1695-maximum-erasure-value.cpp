class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        /* basic max subarray with classic sliding window que */
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int maxSum=0;
        unordered_set<int>st;
        while(j<n){
           while(st.count(nums[j])){
              sum-=nums[i];
              st.erase(nums[i]);
              i++;

           }
           st.insert(nums[j]);
           sum+=nums[j];
           j++;
            maxSum=max(maxSum,sum);
 }
      return maxSum;
        
    }
};