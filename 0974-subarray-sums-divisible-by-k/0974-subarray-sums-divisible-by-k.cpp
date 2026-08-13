/*formula to -3: ((-3 % 5) + 5) % 5 = (-3 + 5) % 5 = 2 % 5 = 2 everything is same as prev specially continuous array one but we take the formula of ((sum%k)+k)%k to work with the condition given here nd here we dont hve atleast condition so we dont need tht here just with basic math */

//working with count and remainders here 
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int result=0;
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1; //count so 1
        for(int i=0;i<nums.size();i++){
               
               sum+=nums[i];
                
                int remainder=((sum%k)+k)%k;
                  result+=mp[remainder];

               mp[remainder]++;

        }
        return result;
    }
};