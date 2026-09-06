class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftSum=0;
        int rightSum=0;
        vector<int>result;
        int n=nums.size();
        int totalSum=0;
        int answer=0;
      /*taking 2 loops and calc left sum and right sum  and getting ans with thr diff*/  
      for(int i=0;i<n;i++){
        totalSum+=nums[i];
      }

      for(int i=0;i<n;i++){

        rightSum=totalSum-leftSum-nums[i];   /*left is ntg at first*/
        answer=abs(rightSum-leftSum);
        result.push_back(answer); 
        leftSum+=nums[i];
      }
      return result;
 }
};