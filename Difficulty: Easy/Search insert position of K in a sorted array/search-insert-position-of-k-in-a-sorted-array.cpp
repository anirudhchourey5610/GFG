class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=(e+s)/2;
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid] < k){
                s=mid+1;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
            mid=(e+s)/2;
        }
        return s;
    }
};