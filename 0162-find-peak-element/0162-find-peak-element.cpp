class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
 /*settling first and last element if they are peak ones */       
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
  /* peak graph examine with considering mid with peak and edge cases str*/
        int low=1; int high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])return mid;
            else if(nums[mid]>nums[mid-1])low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};