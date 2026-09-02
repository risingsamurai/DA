/* using sw we have to find max number of fruits we can take in both baskets and we can only take two types of fruits but unlimited amount in each basket */


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int i=0;
        int j=0;
        unordered_map<int,int>mp;
        int maxFruit=0;
        
        while(j<n){
            mp[fruits[j]]++;  /*j is right fruits here */

            while(mp.size()>2){
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) 
                   mp.erase(fruits[i]);
                   i++;
             }
            maxFruit=max(maxFruit,j-i+1);
            j++; 
        }

        return maxFruit;
    }
};