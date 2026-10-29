class Solution {
public:
        typedef long long ll;
      
 /* creating func of formula of comparing nums nd target with multiplyin thr cost */     
    ll findcost(vector<int>& nums, vector<int>& cost,int target){
         ll result=0;
         for(int i=0;i<nums.size();i++){
            result+=(ll)abs(nums[i]-target)*cost[i]; 
         }
        return result;
      }
    long long minCost(vector<int>& nums, vector<int>& cost) {

      /*find least nd most first */
       ll answer=INT_MAX;
       ll left=*min_element(begin(nums),end(nums));
       ll right=*max_element(begin(nums),end(nums));

        while(left<=right){

            ll mid=left+(right-left)/2;
  /*this function use formula up thr  */
           ll cost1=findcost(nums,cost,mid);
           ll cost2=findcost(nums,cost,mid+1);
  /* normal bs tryin to find least cost */
            answer=min(cost1,cost2);

           if(cost2>cost1){
             right=mid-1;
           }
           else{
             left=mid+1;
           }
      }
       return answer==INT_MAX?0:answer; 
    }
};