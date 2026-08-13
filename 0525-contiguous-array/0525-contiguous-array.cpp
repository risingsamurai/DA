class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int Maxresult=0;
        int cumSum=0;
        
       unordered_map<int,int>mp;
       mp[0]=-1;
        for(int i=0;i<nums.size();i++){

            if(nums[i]==0)
               cumSum+=-1;
            else 
               cumSum+=1;

            if(mp.find(cumSum)==mp.end()){ //if not found insert this 
                mp[cumSum]=i;
            }   

             Maxresult = max(Maxresult, i - mp[cumSum]);   
        }
        return Maxresult;
    }
};
/*so idea is basic frm past sums we hve done 560 nd target sum it is the same pattern but here we consider 0 as -1 so tht (1,0,0,1) this can become (1,-1,-1,1) and we can sum it to 0 and identify equal number of 0s and 1s and yeah we use the similar pattern logic of putting valus in map and moving forward and we we get the same value somewhere we calculate the distance frm tht to current as i-mp[cumSum] which gives us the longest array with max */