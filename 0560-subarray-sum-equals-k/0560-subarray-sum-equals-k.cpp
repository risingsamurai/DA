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
/* see used basic formula as sum-k , meaning subtracting the k values frm sum with hashmap , adding numbers to sum first then with result variable we insert the values we get frm declared formula which we are doing for eg if we hve sum of 8 and with we k as 3 and we do 8-3=5 and if we hve got 5 before then we can conclude we hve one subarray as we added 3 to 5 for 8 and then we update the map , also we have declared mp with 0 at first in some cases to pass , if any confusion refer codewithmik yt vid */