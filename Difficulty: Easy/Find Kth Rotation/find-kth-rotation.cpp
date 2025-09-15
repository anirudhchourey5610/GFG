class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
       
        while(s<e){
            if(arr[mid]>arr[e]){
                s=mid+1;
            }
            else if(arr[mid]<=arr[e]){
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
};
