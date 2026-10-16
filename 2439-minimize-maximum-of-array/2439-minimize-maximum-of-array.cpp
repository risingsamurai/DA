class Solution {
public:
/* we create a buffer which makes the next element to be in limit before increasing */
    bool isValue(vector<int>&nums,int mid_max,int n){

        vector<long long>arr(begin(nums),end(nums));
            
            for(int i=0;i<n-1;i++){
              
            if(arr[i]>mid_max)
            return false;
            long long buffer=mid_max-arr[i];

            arr[i+1]=arr[i+1]-buffer;    
            }
     /*last element here smaller thn max */       
            return arr[n-1]<=mid_max;
            

    }
    int minimizeArrayValue(vector<int>& nums) {
          int n=nums.size();

          int maxL=0;
          int maxR=*max_element(begin(nums),end(nums));
          int result=0;
        while(maxL<=maxR){

            int mid_max=maxL+(maxR-maxL)/2;

            if(isValue(nums,mid_max,n)){
                result=mid_max;
                maxR=mid_max-1;
            }
            else{
                maxL=mid_max+1;
            }
        }return result;
    }

};