class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int ansSum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<k;i++){
            ansSum=ansSum+arr[i];
        }
        maxSum=ansSum;
        for(int i=k;i<arr.size();i++){
            ansSum=ansSum+arr[i]-arr[i-k];
            maxSum=max(maxSum,ansSum);
        }
        return maxSum;
    }
};