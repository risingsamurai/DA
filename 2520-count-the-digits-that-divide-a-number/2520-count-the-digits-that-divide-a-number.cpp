class Solution {
public:
    int countDigits(int num) {
        int orginal=num;
        int count=0;
        int digit=0;
        while(num>0){
         int digit=num%10;
        
          if(orginal%digit==0){
                count++;
            }
          num /= 10;
        }
        return count;
    }
};