class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            } 
         if(sum<=0){
            sum=0;
        }
        }
        return max;
    }
};
/* just basic nums adding to sum and thne checking if sum is geater thn max nd updating it everytime and one more if statment for vlu less thn 0 or equalk nd resting it to sum =0 */