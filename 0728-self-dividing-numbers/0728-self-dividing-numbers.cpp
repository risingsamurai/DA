class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>final;
        for(int num = left; num <= right; num++) {//for range given
    int temp = num; //extracting the values to keep num untouched
    bool valid = true; 

    while(temp > 0) {
        int digit = temp % 10;

        if(digit == 0 || num % digit != 0) {//0 not allowed so
            valid = false;
        }

        temp /= 10;
    }
//push inside the vector if valid
    if(valid) {
        final.push_back(num);
    }
}
     return final;   
    }
};