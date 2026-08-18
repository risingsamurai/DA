class Solution {
public:
    bool canAliceWin(int n) {
        int x=10; //given boi

        while(n>=x){
            n = n-x;
            x--;
        }
       return x%2==1; 
    }
};