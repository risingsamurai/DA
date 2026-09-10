class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int prevNotdel = arr[0];
        int prevdel = 0;
        int MOST = arr[0];
/*prevNotdel is best sum where nothing has been deleted yet, and by NOT adding the current element, we are deleting the current element */
        for (int i = 1; i < n; i++) {
            prevdel = max(prevNotdel, prevdel + arr[i]);
            prevNotdel = max(prevNotdel + arr[i], arr[i]);

            MOST = max(MOST, max(prevdel, prevNotdel));
        }

        return MOST;
    }
};