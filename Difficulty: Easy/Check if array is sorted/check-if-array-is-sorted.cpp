class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0;
        while(i<n-1){
            int j=i+1;
            if(arr[i]>arr[j]){
                return false;
                break;
            }
            i++;
        }
        return true;
    }
};