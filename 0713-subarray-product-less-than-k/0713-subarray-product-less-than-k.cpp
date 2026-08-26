class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int prod=1;
        int left=0;
 /* using basic sliding window concept till the valid condition */       

        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(left<=i && prod>=k){//left<=i is to check single ele if > than k
            prod = prod / nums[left]; //removes left most element 
             left++;
           }
             count += (i - left + 1);
    
        }
        return count;
    }
};