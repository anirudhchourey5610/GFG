class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int n=arr.size();
        int ans=0;
        int mini=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                ans+=arr[i-1]-mini;
                mini=arr[i];
            }
        }
        if(arr[n-1]>mini){
            ans+=arr[n-1]-mini;
        }
        return ans;
    }
};