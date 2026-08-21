/*we take two parts prefix and suffix which compares frm first nd last nd find largest subarrays and if 0 comes we put 1 nd reset the subarray and return it , 
eg:[1,5,6,7,0,8,7,3] frm first prefix works and then frm last suffix works nd finds largest subarray , also declare INT_MIN to keep max for prod  */
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int suffix=1;
        int prefix=1;
        int maxProd=INT_MIN;
        for(int i=0;i<n;i++){

            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            maxProd=max(maxProd,max(suffix,prefix));
        }
     return maxProd;   
    }
};









// if any conf check striver
