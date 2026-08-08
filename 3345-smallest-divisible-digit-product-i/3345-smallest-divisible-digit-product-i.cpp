class Solution {
public:
    int smallestNumber(int n, int t) {
    for (int candidate = n; ; candidate++) { //loop runs infinite
            int num = candidate;
            int product = 1;
            while (num > 0) {
                int digit = num % 10;   // to get the last digit basic shi
                product = product * digit;
             num = num / 10;         // drop the last digit
            }
            if (product % t == 0) {
                return candidate;
         }
        }
    }
};