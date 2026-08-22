class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        return max(nums[0] * nums[1] * nums[n-1],
                   nums[n-1] * nums[n-2] * nums[n-3]);
    }
};

/*eg:[-10, -9, 2, 3, 5]
 smallest × second smallest × largest in max logic nums[0] * nums[1] * nums[n-1], 
 this is the case if negative nd postitive also to counter tht and for normal we use   nums[n-1] * nums[n-2] * nums[n-3]) which mean largest , second largest andd third largest after sorting */