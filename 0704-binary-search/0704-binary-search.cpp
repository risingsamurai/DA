class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;//int overflow
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) low = mid + 1; //move right 
            else high = mid - 1;//move left
        }
        return -1;
    }
};