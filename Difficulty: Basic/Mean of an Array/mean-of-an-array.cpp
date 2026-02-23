class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
        }
        int mean=sum/n;
        return mean;
    }
};