class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int j=0;
       int minlen=INT_MAX;
       int sum=0;

       while(j<n){
        sum+=nums[j];       //add prefix fully first 
        /* as condition check if it is equal or greater thn target and get tht min value and shrink */
        while(sum>=target){
             minlen=min(minlen,j-i+1);
            sum-=nums[i];
            i++;
        }   
            j++;
       }
       if(minlen==INT_MAX){ //this is for last condition of 0
        return 0;
        } else {
        return minlen;
        }
    }
};