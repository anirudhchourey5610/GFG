class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int t=n/2;
        double ans;
        if(n%2==0){
            ans=double(arr[t]+arr[t-1])/2;
        }
        else if(n%2!=0){
            ans=arr[t];
        }
        return ans;
    }
};