class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length(); //its the same for t 
        int i=0 ; int j=0; //classes sliding window theme
        int currCost=0;
        int maxlen=0;
     //o(n) , see how mny times each value visited , o(1)space (except input obi)
        while(j<n){
            currCost+=abs(s[j]-t[j]);
           //shrink window if exceeds
            while(currCost>maxCost){
                currCost-=abs(s[i]-t[i]);
                i++;
          }
          maxlen=max(maxlen,j-i+1);
          j++;
        }

        return maxlen;
    }
};