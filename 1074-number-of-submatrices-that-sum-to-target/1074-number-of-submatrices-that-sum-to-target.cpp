/* this is a complex one firstly go through 560 and kaddane algo sum to understand this then for understanding can visit codewithmik yt vid ttps://youtu.be/-SWrz90jCUM?si=edzQk_g66uoPKvev   and then refer the own notes to see the coonections here , we firstly add the horizontal rows and then with two loops to clear out each vertical path and to meet target we use the similar logic of subtracting sum with k tht is target but one logic to be understood here is once  we add the first col we subtract tht when we move to next col with this sum+=matrix[row][j]-(startcol >0?matrix[row][startcol-1]:0); rest all is the same logic of 560 lc */


class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        //lets declare
        int rows=matrix.size();
        int cols=matrix[0].size();

        //firstly we will be adding rows in horizontal direction so we dont miss anything :/
       for(int row=0;row<rows;row++){
        for(int col=1;col<cols;col++){
            matrix[row][col]+=matrix[row][col-1];       // [1,1,1] = [1,2,3] eg 
        }
       } 
       //we are using two for loops which cover every possible vertical strips
       int result=0;
       for(int startcol=0;startcol<cols;startcol++){
        
            for(int j=startcol;j<cols;j++){
                 map<int,int>mp;

                int sum=0 ;
        //using lc 560 and akdane algo logic same 
                  mp[0]=1; //once needs to be decalred

                  for(int row=0;row<rows;row++){
                    //we reduce the first col we added during horizontal addition
                    sum+=matrix[row][j]-(startcol >0?matrix[row][startcol-1]:0);

                    //same logic 
                    result +=mp[sum-target];
                    mp[sum]++;
                  }
            
            
            
             }
       } return result;
    }
};