class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //adding con for less thn 1
        if(intervals.size()<=1)
        return intervals;

        //sort it now with [_,_]
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[0]<b[0];
        });
        //we declare the vector now
        vector<vector<int>>result;
        result.push_back(intervals[0]);

        for(auto & interval:intervals){
            if(interval[0]<=result.back()[1]){  //eg [1,6] <-result.back  [4,9] <-interval[0]
            result.back()[1]=max(result.back()[1],interval[1]); //we get[1,9]
            }
            else
            result.push_back(interval);
        }
        return result;
    }
};