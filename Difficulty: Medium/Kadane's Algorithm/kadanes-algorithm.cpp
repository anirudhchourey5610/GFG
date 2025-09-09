class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int MAX_SUM=arr[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(MAX_SUM<sum){
                MAX_SUM=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return MAX_SUM;
    }
};