class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int> ans;
        int n=a.size();
        int m=b.size();
       for(int num:a){
           ans[num]++;
       }
       for(int num:b){
           ans[num]++;
       }
       vector<int> finalAns;
       for(auto &it:ans){
          finalAns.push_back(it.first);
       }
       return finalAns;
    }
};