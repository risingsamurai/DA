/*fully similar to pivot index sum adn just pasted tht */
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int totalsum=0;
        int pivot=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
         }
        for(int i=0;i<n;i++){

            rightsum=totalsum-nums[i]-leftsum;

            if(rightsum==leftsum){
                return i;
            }

            leftsum+=nums[i];     /*left after everything bcuz we shouldnt calculate the current index */
        }
        return -1;
    }
};