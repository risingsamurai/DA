/*sliding window (khandani)taking i and j we go the same way */

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int result=0;
             /*add a map */
        unordered_map<int,int>mp;       
        //add all the values 
        while(j<n){
            mp[nums[j]]++;
        /*all the values in sub array should have same freq check that */       
        while(i<j && mp[nums[j]]>k){ //while to check invalid
            mp[nums[i]]--;   //remove left i and move on to next 
            i++;
        } 
        result=max(result,j-i+1);//return the longest subarray with same freq
        j++;
        } 
        return result;
    }
};
//j-i+1 to check number of elements in the window [i, j]