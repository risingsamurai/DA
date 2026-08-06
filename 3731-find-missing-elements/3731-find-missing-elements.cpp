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
        for(int i = nums[0]; i <= nums[n-1]; i++){ //values iteration 
        if(mp.find(i)==mp.end())
        result.push_back(i);
    }return result;
    }
};
/* first we sort the thing then iteration on sorted elements in ascending sending in map , then using basic logic of missing numbers are returned with help of hashmap (mp.find(i)==mp.end()) we find the missingnumberspushing them in vector*/