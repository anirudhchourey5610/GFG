class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                ans++;
            }
        }
        if(ans==0){
            return -1;
        }
        return (arr.size())-ans;
    }
};