class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0;/*TWO POINTERS WITH REDUCTION ND ADD till u get c */
        long long right = (long long)sqrt(c); /* sqrt in bigger cases helpful,ll decimal remove */ 

        while(left<=right){
            long long curr=left*left+right*right; /*A+B SQUARE HERE */

            if(curr<c){
                left++;
            }
            else if(curr>c){
                right--;
            }
            else{
                return true;
            }
        }
return false;
    }
};