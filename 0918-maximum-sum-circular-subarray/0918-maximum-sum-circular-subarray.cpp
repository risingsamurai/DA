/*kinda hard refer the notes or mk to understand or git*/

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int curMax = 0, maxSum = INT_MIN;
        int curMin = 0, minSum = INT_MAX;
 /*summing the total first */
        for (int x : nums) {
            total += x;
/* four max currently , min currently and max and min of all time */
           curMax = max(x, curMax + x);
         maxSum = max(maxSum, curMax);
         curMin = min(x, curMin + x);
            minSum = min(minSum, curMin);
        }

        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};