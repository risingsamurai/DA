class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
    /*If k > 0, replace the ith number with the sum of the next k numbers.
      If k < 0, replace the ith number with the sum of the previous -k numbers.
      If k == 0, replace the ith number with 0.*/   
    
      int n=code.size();
      vector<int>result;
      for(int i=0;i<n;i++){
        int sum=0;
      for(int j=1;j<=abs(k);j++){
          
          if(k>0){
            sum+=code[(j+i)%n];
          }
          else if(k<0){
            sum+=code[(i-j+n)%n];/*prev elements */
          }
          else
            sum+=0;
           }
       result.push_back(sum);
      }
      return result;
    }
};