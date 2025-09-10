class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
         int ansIndex=-1;
        int ansIndex1=-1;
        int s=0;
      int e=n-1;
      int mid=s+(e-s)/2;
      while(s<=e){
          if(arr[mid]==x){
              ansIndex=mid;
              e=mid-1;
          }
          else if(arr[mid]>x){
              e=mid-1;
          }
          else if(arr[mid]<x){
              s=mid+1;
          }
          mid=s+(e-s)/2;
      }
      int s1=0;
      int e1=n-1;
      int mid1=s1+(e1-s1)/2;
      while(s1<=e1){
          if(arr[mid1]==x){
              ansIndex1=mid1;
              s1=mid1+1;
          }
          else if(arr[mid1]>x){
              e1=mid1-1;
          }
          else if(arr[mid1]<x){
              s1=mid1+1;
          }
          mid1=s1+(e1-s1)/2;
      }
        vector<int> ans(2);
        ans[0]=ansIndex;
        ans[1]=ansIndex1;
        return ans;
    }
};