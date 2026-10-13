class Solution { /*cwmk*/
public:

  long long tripsBy(long long t, vector<int>& time) {
        long long count = 0;
        for (int x : time) {
            count += t / x;
        }
        return count;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {

        long long l=1;
        long long r = (long long)*min_element(time.begin(), time.end()) * totalTrips;
        long long mid=l+(r-l)/2;

        while(l<r){
         long long mid=l+(r-l)/2;
            if(tripsBy(mid,time)>=totalTrips){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
