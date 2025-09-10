// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        int ansIndex=-1;
        while (s <= e) {
        if(arr[mid] >= x){
        ansIndex = mid;
        e = mid - 1;    
        }
        else{
            s=mid+1;
        }
        mid = s + (e - s) / 2;
        }
    return ansIndex;
    }
};