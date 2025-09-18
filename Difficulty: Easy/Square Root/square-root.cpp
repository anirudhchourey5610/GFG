class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int s=1;
        int e=n;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid<n){
                s=mid+1;
            }
            else if(mid*mid>n){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return mid-1;
    }
};