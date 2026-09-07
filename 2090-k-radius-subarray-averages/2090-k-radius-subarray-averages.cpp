class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
      /*mk vid */
     int n=nums.size();
       
     if(k==0){              
        return nums;      /*test case */
     }  
     vector<int>result(n,-1);

     if(n<2*k+1){
        return result;     /*if n smaller then no point of doing */
     } 
 /* take sum for avg */
 long long window=0;
     int left=0;
     int right=2*k;
     int i=k;
     for(int i=left;i<=right;i++){
        window+=nums[i];               
     }
     int count=2*k+1;
     result[i]=window/count;

    i++;
    right++;
/*sliding window */
    while(n>right){
        int blud_outofwindow=nums[left];
        int blud_cmginwindow=nums[right];
        window=window+blud_cmginwindow-blud_outofwindow;
       
        result[i]=window/count;
        i++;
        left++;
        right++;
    } 
        return result;
    }
};