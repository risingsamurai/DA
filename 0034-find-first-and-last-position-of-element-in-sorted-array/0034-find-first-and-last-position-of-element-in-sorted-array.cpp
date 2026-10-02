class Solution {
public:
    // CHANGED: removed n; the helper gets the size from nums
    int first(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int firstPos = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
/*three ways with moving left if mid and move right if less thn mid and less thn move left*/
          
            if (nums[mid] == target) {
                firstPos = mid;
               high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
         } else {
                high = mid - 1;
            }
        }
        return firstPos;
    }


    int last(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
     int lastPos = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                lastPos = mid;
             low = mid + 1; 
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return lastPos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = first(nums, target);
        if (firstPos == -1) return {-1, -1};

        int lastPos = last(nums, target);
        return {firstPos, lastPos};
    }
};