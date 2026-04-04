class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size()!=b.size()){
            return false;
        }
        unordered_map<int,int> map;
        for(int i=0;i<a.size();i++){
            map[a[i]]++;
        }
        for(int i=0;i<a.size();i++){
        if(map.find(b[i])==map.end()){
            return false;
        }
        if(map[b[i]]==0){
            return false;
        }
        map[b[i]]--;
    }
    return true;
    }
};