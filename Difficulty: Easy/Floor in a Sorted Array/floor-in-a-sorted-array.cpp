class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int index=-1;
        while(s<=e){
            if(arr[mid]<=x){
                index=mid;
                s=mid+1;
            }
            else if(arr[mid]>x){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return index;
    }
};
