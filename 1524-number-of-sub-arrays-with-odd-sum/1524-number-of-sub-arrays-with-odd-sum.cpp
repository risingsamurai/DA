 //keep all subarray patterns in mind and its basic if else condition sum and we add even to odd result nd vice verse basic math
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum=0;
        int odd=0;
        int evenCount=1;
        int oddCount=0;
        int result=0;
        const int MOD = 1e9 + 7;

        for(int i=0;i<arr.size();i++){

            sum+=arr[i];

            if(sum%2==1){
                 result = (result + evenCount) % MOD;
                oddCount++;
            }
            else{
                result = (result + oddCount) % MOD;
                evenCount++;
                }
          
        }
          return result;
  }
};