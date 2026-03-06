class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(auto it:freq){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};