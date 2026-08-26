class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int count=0;
        int prod=1;
        int left=0;

        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(left<=i && prod>=k){
            prod = prod / nums[left]; //removes left most element 
             left++;
           }
             count += (i - left + 1);
    
        }
        return count;
    }
};