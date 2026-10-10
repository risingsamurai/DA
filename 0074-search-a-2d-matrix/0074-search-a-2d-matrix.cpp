class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int start=0;
        int end=m*n-1; /*imagine 2d matrix into 1d array */

        

        while(start<=end){
            int mid=start+(end-start)/2;
        /* mid/n finds us row nd mid%n finds us column */    
            int row=mid/n;
            int col=mid%n; 

            if(matrix[row][col]>target){
                end=mid-1;
            }
            else if(matrix[row][col]<target){
                start=mid+1;
            }
            else{
                return true;
            }

        }
        return false;
    }
};