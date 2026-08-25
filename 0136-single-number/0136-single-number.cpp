class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;

        for (int i = 0; i < nums.size(); i++)
        XOR = XOR ^ nums[i];

         return XOR;
        
    }
};
/*x ^ x = 0
x ^ 0 = x
XOR can be rearranged */