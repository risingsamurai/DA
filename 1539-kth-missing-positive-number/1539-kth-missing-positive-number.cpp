class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n=arr.size();

        int l=0; int r=n-1;

    while(l<=r){

        int mid=l+(r-l)/2;
/* so basically we are comparing actual and wt is curr values with logic of numbers nd index way ,mid+1 is just normal mid value 1 which is expected thr and if diff then we missed value */
        int missed_tillnow=arr[mid]-(mid+1);

        if(missed_tillnow<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
       return l+k; 
    }
};