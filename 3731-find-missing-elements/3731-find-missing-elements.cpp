class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) { 
        sort(nums.begin(),nums.end());
        int n = nums.size();
        map<int,int>mp;
        for(auto x:nums){
        mp[x]++;
        }
        vector<int>result;
        for(int i = nums[0]; i <= nums[n-1]; i++){
        if(mp.find(i)==mp.end())
        result.push_back(i);
    }return result;
    }
};