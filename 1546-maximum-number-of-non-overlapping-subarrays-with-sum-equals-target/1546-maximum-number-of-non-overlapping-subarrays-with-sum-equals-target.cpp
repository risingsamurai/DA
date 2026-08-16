  class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int sum=0;
        int result=0;
        int end=-1;

        unordered_map<int,int>mp;
         mp[0]=-1;
        for(int i=0;i<nums.size();i++){

            sum+=nums[i];
            if(mp.find(sum-target)!=mp.end() and mp[sum-target]>=end){
                result+=1;
                end=i;

            }mp[sum]=i;
        }
        return result;
    }
};
/*we took new endvariable bcuz ofoverlapping condition and just basic prefixlogic*/
   