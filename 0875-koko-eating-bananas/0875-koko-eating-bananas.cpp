class Solution {
public:
 /*make help function first to find hours */
        bool canEat(vector<int>piles,int mid,int h){
         long long activehours = 0;
               for(int &x:piles){
                  
                   activehours+=x/mid;

                   if(x%mid!=0){
                    activehours++;
                   }
               }
               return activehours<=h;
               }
          int minEatingSpeed(vector<int>& piles, int h){
            int n=piles.size();

           int low=1;
           int high=*max_element(begin(piles),end(piles));

           while(low<=high){
          int mid = low + (high - low) / 2;
/* check if true then bring high on left if yes */
            if(canEat(piles,mid,h)){
                high=mid-1;

            }
            else{
                low=mid+1;
            }

           }
       return low;
        
    }
};