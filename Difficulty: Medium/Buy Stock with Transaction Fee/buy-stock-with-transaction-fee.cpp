class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int curr=0,cnt=0;
        for(int i=n-1;i>=0;i--){
            int t=max(cnt,curr-arr[i]);
            int p=max(curr,arr[i]-k+cnt);
            cnt=t;
            curr=p;
        }
        return cnt;
    }
};