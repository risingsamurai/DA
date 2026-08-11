class Solution {
public:
    bool isHappy(int nums) {
        //hash and floyd
        unordered_set<int>st;
        while(nums!=1){
            if(st.find(nums)!=st.end()){
                return false;
            }st.insert(nums);
              int sum=0;
        while(nums!=0){
            int digits=nums%10;
            sum+=digits*digits;
            nums=nums/10;
           }
        nums=sum;
        }
        return true;
    }
};