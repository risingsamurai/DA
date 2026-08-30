/* basic idea is using basic khandani sliding window concept but first in this we find all the arrays less than or equal to k and then shrink if it fails , then with these k values , we do k and k-1 which gives us all good arrays we require(k) and removes remaining values ,eg; k=2 means we need 2 different integers so with our appraoch it gives us full values below or equal to k then we subtract remaining with k and get answer , if any doubt refer cwm */

class Solution {
public:
      int slidingwindow(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
    /*we are goin to find values which are smaller or equal to k now and we start with khandani basic sliding window template */

     while(j<n){
        mp[nums[j]]++;
    /*here we are moving i if it exceeds size of k as declared and erase i*/
        while(mp.size()>k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        count+=j-i+1;//this gives us all subarrays ending at j
        j++;
      } 
       return count;
      }
/* now subtract k with k-1 so tht we get exact k given good array */
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return  slidingwindow(nums, k)- slidingwindow( nums, k-1);
        
    }
};