class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set;

        for(int i:nums)    //direct for the values

         set.insert(i); 
         int multiple = k;   //eg k=2 then +2 =4 then +2 =6 if exists keep going
         while(set.count(multiple)){  //else return first missing multiple
            multiple += k;   
        }
    return multiple;
    }
};