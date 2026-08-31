/* this is basic sw question with checking max consecutive 1s and if we find any zero flip it taking quantity of k and return the max length of 1s */

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        /*basic sw que , idea is to change 0 to 1 for k quantity and return max 1's*/
        int i=0;
        int j=0;
        int zerocount=0;
        int maxlen=INT_MIN;
        int n=nums.size();

        while(j<n)
        {  /* we are checking for zeros for the coint */
            if(nums[j]==0)zerocount++;
    /*if fails then shrink the window and if i had zero then remove tht frm count */
            while(zerocount>k){
                if(nums[i]==0)zerocount--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};