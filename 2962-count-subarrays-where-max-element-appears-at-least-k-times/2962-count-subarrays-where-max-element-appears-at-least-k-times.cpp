class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;int j=0; //sliding window
        unordered_map<int,int>mp;
        long long count=0;
        //find max element frm array first lil bro
         int x=0;
         int mx=INT_MIN;

         while(x<n){
          mx=max(mx,nums[x]);
          x++;
         }
        //check if max count is greater or equal to k element
        while(j<n){
            mp[nums[j]]++;//adding in map
        
                 while(i<=j && mp[mx]>=k){//shrink
                    mp[nums[i]]--;
                    i++;
                 }
                count += i; 
                j++;
        }
          return count; 
        
    }
};