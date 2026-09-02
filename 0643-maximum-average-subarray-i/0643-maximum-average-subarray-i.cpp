/*its quite diff frm other ones here we will have a fixed size window refer notebook */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxLen=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxLen=sum;
        int i=0;
        int j=k;

        while(j<n){
            sum-=nums[i]; /*we are removing  leftside value */
            i++;

            sum+=nums[j];   /* we are adding adding next vakue */
            j++;

            maxLen=max(maxLen,sum);
        }

   return(double)maxLen/k;/*sum and k are both integers, and integer division removes decimals —                        7/2 gives 3, not 3.5 */
        
    }
};