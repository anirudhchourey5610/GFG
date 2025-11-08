class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        int n=arr.size();
        int ans1=-1;
        int ans2=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                ans1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==key){
                ans2=i;
                break;
            }
        }
        return {ans1,ans2};
    }
};