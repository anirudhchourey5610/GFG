class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
       int s=0;
       int e=m;
       int mid=s+(e-s)/2;
       while(s<=e){
           if(pow(mid,n)==m){
               return mid;
           }
           else if(pow(mid,n)>m){
               e=mid-1;
           }
           else if(pow(mid,n)<m){
               s=mid+1;
           }
           mid=(e+s)/2;
       }
       return -1;
    }
};