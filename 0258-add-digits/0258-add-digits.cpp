class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int sum=0;
            while(num>0){
            int digit=num%10;
            sum += digit;
            num =num/10;  
        }    
           num=sum;
        }
        return num;
    }
};
//used basic idea of mod % to peel off digits and then add them and return if single digit with while loop 