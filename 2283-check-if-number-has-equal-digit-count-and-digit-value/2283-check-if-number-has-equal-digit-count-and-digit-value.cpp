/*detailed explanation of que
At index 0, num[0] = 1 → digit 0 should occur 1 time
At index 1, num[1] = 2 → digit 1 should occur 2 times
At index 2, num[2] = 1 → digit 2 should occur 1 time
At index 3, num[3] = 0 → digit 3 should occur 0 times
'0' to convert a digit character into its integer value */

class Solution {
public:
    bool digitCount(string num) {
        for(int i = 0; i < num.length(); i++) {
            int count = 0;

            for(char c : num) {
                if(c - '0' == i) {
                    count++;
                }
         }
//so actual count ==required count gives us true
            if(count != num[i] - '0') { //eg if 2!=2, nums[i] is count
                return false;
            }
        }

        return true;
    }
};