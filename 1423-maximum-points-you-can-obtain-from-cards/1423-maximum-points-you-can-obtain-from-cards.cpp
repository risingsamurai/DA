class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int prefix = 0;
        int suffix = 0;
        int n = cardPoints.size();

        // initially: 0 left + k right
        for(int i = n - k; i < n; i++) {
            suffix += cardPoints[i];
        }

        int maxCardPoints = suffix;

        /*move cards one-by-one from right side to left side */
        for(int i = 1; i <= k; i++) {
            prefix += cardPoints[i - 1];

            suffix -= cardPoints[n - k + i - 1];
         maxCardPoints = max(maxCardPoints, prefix + suffix);
        }

        return maxCardPoints;
    }
};