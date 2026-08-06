class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        vector<int>result;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end())
            result.push_back(i);
        }
        
        return result;
    }
};
/* same as findmissingnumbers but wehve range frm 1 to n and we just use unordered set here as we dont need it sorted and with hashset wefind the answer */