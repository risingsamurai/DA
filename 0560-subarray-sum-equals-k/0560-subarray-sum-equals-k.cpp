class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0] = 1;
        int sum=0;
        int result=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];    
            result+=mp[sum-k];
            mp[sum]++;
        }
      return result;  
    }
}; 
/* see used basic formula as sum-k , meaning subtracting the k values frm sum with hashmap , adding numbers to sum first then with result variable we insert the values we get frm declared formula and then we update the map , also we have declared mp with 0 at first in some cases to pass , if any confusion refer codewithmik yt vid */