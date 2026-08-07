class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0; int fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=0;
         while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
    return slow;    
    }
};

/* it is very simple with brute , hash but for the only constant extra space refer this https://youtu.be/_n5MR8IxR6c?si=L4NBcezc_y5v-bmq */