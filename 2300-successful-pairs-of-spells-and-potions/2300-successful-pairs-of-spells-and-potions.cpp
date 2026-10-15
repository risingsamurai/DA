class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
         
        vector<int> pairs(spells.size());
        sort(potions.begin(), potions.end());

        for(int i=0;i<spells.size();i++){

            auto it = lower_bound(potions.begin(), potions.end(), (success + spells[i] - 1) / spells[i]);

            pairs[i] = potions.end() - it;
        }

      return pairs;
        
    }
};