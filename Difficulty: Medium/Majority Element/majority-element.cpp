class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> ans;
        for(int nums:arr){
            ans[nums]++;
        }
        int n=arr.size();
        for(auto it:ans){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};