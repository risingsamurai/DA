//Can this kid have at least as many candies as the current greatest kid or current max if yes then return true 

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies=0;

        for(int i=0;i<candies.size();i++){
            maxCandies=max(maxCandies,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
        if(candies[i] + extraCandies >= maxCandies){
        result.push_back(true);
         } else{
        result.push_back(false);
        }
        }   
        return result;
 }
};