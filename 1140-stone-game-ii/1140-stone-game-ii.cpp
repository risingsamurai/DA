/* revise game theory frm codewithmik before cmg here , hve constraints in mind , already given piles vector */

class Solution {
public:
       int n;
       int t[2][101][101];//constraints given :)
    /* now we are setting a function , careful boi*/
    int solveforAlice(vector<int>&piles,int person,int i,int M){
        //best case -1 else worse case so cant start with -1 at first
        if(i>=n){
            return 0;
        }
        if(t[person][i][M]!=-1){
            return t[person][i][M];
        }
        int result=(person==1)?-1:INT_MAX;

        int stones=0;
        //a loop nd cap at end with min

        for(int x=1;x<=min(2*M,n-i);x++){
             //imp lines for index nd sum 
            stones += piles[i+x-1];
/*solveForAlice(piles, 0, i+x, max(M, x)) — this is the recursive call asking: if I take these x piles, what's the best Alice can still get from the rest of the game onward and stones+solve this stuff asking the best case optimally howalice can get with tht ,basically bob plytime nd then else is aliceplaytime Bob wants to stop Alice from getting lots of stones.so min in else Alice → max()
Bob   → min()*/
            if(person==1){
                result=max(result,stones+solveforAlice(piles,0,i+x,max(M,x)));
            }
            else{
                result=min(result,solveforAlice(piles,1,i+x,max(M,x)));
            }
                
             }
                  return t[person][i][M] = result;


    }   ;
int stoneGameII(vector<int>& piles) {

        /*taking global variable and memset for reset */
        n=piles.size();
        memset(t,-1,sizeof(t));
         return solveforAlice(piles, 1, 0, 1);
        
    }
};