class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
       for(int i=0;i<n;i++){
            if(arr[mid]==target){
                e=mid-1;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }
            else if(arr[mid]>target){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return mid;
    }
};
