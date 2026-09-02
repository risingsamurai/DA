/* this is special case of max consecutive III but we have a zero in between consecutive which we delete as last with -1 , bcuz conceptually we have to remove 1 element compulsory (if not zero , we gotta remove 1 ),so with same logic we just put the zerocount > 1 to trigger the condition of question and then return the consecutive values as we did in prev sliding window questions */

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        /*basic sw que , idea is to change 0 to 1 once and return max 1's*/
        int i=0;
        int j=0;
        int zerocount=0;
        int maxlen=INT_MIN;
        int n=nums.size();

        while(j<n)
        {  /* we are checking for zeros for the coint */
            if(nums[j]==0)zerocount++;
           /*if fails then shrink the window and if i had zero then remove tht frm count */
            while(zerocount>1){
                if(nums[i]==0)zerocount--;
                i++;
            }
            maxlen=max(maxlen,j-i+1-1); /*main*/
            j++;
        }
        return maxlen;
        
    }
};