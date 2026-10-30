/* everything is similar to 1 squal array only cost for each value is not thr here so accordingly do */

class Solution {
public:
   typedef long long ll;
       ll totalmoves(vector<int>&nums,int target){
        ll result=0;
        for(int i=0;i<nums.size();i++){
        result+=(ll)abs(nums[i]-target);
        }
        return result;
       }
       long long minMoves2(vector<int>& nums) {
        ll left=*min_element(begin(nums),end(nums));
        ll right=*max_element(begin(nums),end(nums));
         
        ll answer=INT_MAX;
        while(left<=right){ 

        ll mid=left+(right-left)/2;
        ll move1=totalmoves(nums,mid);
        ll move2=totalmoves(nums,mid+1);

        answer=min(answer,min(move1,move2));
        if(move2>move1){
           right=mid-1;
        }
        else{
            left=mid+1;
        }
      }
      return answer==INT_MAX?0:answer;
    }
};