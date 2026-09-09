/* idea is to take max nd min overall and get absolute max value comparing both */

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        /*just apply kadane algo(both max nd min) */
        int n=nums.size();
        int maxSubsum=nums[0];
        int currSubsum=nums[0];
       /* max one jus ask is curr bigger or curr nd prev bigger */ 
        for(int i=1;i<n;i++){

            currSubsum=max(nums[i],currSubsum+nums[i]);
            maxSubsum=max(maxSubsum,currSubsum);
        } 
       /* one for min */
        int minSubsum=nums[0];
        currSubsum=nums[0];

        for(int i=1;i<n;i++){
            
            currSubsum=min(nums[i],currSubsum+nums[i]);
            minSubsum=min(minSubsum,currSubsum);
        }
        return max(maxSubsum,abs(minSubsum));
        
    }
};