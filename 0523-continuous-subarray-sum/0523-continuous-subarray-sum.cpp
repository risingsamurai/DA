class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int sum=0;
        int result=0;
        int remainder=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
             sum+=nums[i]; 
             remainder=sum%k;
             if(mp.find(remainder)!=mp.end()){ // if remainder is seen 
            if(i-mp[remainder]>=2) //the condition
                return true;
             }else{
                    mp[remainder]=i;
                }
              }
         return false;
    }
};
/* cwm    using maths firstly we get raminder by sum %k ten we check if remainder if thr in condition and use logic of index-remainder >=2 it is multiple of k so its fine taking remainder and else if we alraedy hve */