class Solution {
public:
    int findpivot(vector<int>&nums,int l,int r){
        while(l<r){
       /* skip the duplicates */

            int mid=l+(r-l)/2;

            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else if(nums[mid] < nums[r]){
                r=mid;
        }
         else {                        /* nums[mid] == nums[r], can't tell */
            if(nums[r-1] > nums[r])  
                return r;
            r--;                     
        }
    }return r;
    }          
/* basic binary search */   
   bool binarysearch(vector<int>&nums,int l , int r,int&target){

    while(l<=r){

        int mid=l+(r-l)/2;
        
        if(nums[mid]==target)
         return true;

        if(nums[mid]<target){
            l=mid+1;
        }
        else r=mid-1;
    }
    return false;
   }
 /* right nd left pivot */ 
    bool search(vector<int>& nums, int target) {
            int n=nums.size();
            
            int pivot=findpivot(nums,0,n-1);

            if(binarysearch(nums,0,pivot-1,target)){
                return true;
            }
            return binarysearch(nums,pivot,n-1,target);
    }
};