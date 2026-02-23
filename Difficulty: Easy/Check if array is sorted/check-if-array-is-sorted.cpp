class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int i=0;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                return false;
            }
            i++;
        }
        return true;
    }
};