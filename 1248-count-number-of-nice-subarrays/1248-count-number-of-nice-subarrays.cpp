/* before solving this go through 560 and other prefix ones as they are all similar , coming to this sum we are gonna consider all even number as 0 and odd ones as 1 with simple if else statement and rest logic is gonna be same the sum-k thing with map declared  eg 8-5=3 and if we hve 3 then we add it to result so basic math tht 5 existed which is k value so we get one subarray  */

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int result=0;
        int sum=0;
       unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0 ; i<nums.size();i++){
            
            if(nums[i]%2==0)
            nums[i]=0;
            else
            nums[i]=1;

            sum += nums[i];

            result+=mp[sum-k];
            mp[sum]++;

        }
        return result;
    }
};