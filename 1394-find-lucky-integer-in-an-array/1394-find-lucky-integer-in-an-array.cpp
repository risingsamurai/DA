class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int,int>mp;
        int answer=-1;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==arr[i]){
                answer=max(answer,arr[i]);
             }
        }
       return answer;
       
    }
};