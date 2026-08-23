/*1LL is doing multiplication by long long instad of int , comparing 3 pairs 1 and 2nd , 1 and last ,last and last second and taking out the max value to get product , abs is |-1| modulas */
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());

        long long a = 1LL * nums[0] * nums[1];
        long long b = 1LL * nums[0] * nums[n-1];
        long long c = 1LL * nums[n-2] * nums[n-1];

        long long p = max({abs(a), abs(b), abs(c)});

        return p * 100000;
    }
};