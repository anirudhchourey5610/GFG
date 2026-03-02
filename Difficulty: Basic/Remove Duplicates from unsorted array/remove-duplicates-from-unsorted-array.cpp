// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int> seen;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(seen.find(arr[i])==seen.end()){
                ans.push_back(arr[i]);
                seen.insert(arr[i]);
            }
        }
        return ans;
    }
};