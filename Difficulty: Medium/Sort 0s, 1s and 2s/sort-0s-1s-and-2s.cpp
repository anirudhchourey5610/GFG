class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int mid=0;
        int j=arr.size()-1;
        while(mid<=j){
            if(arr[mid]==0){
                swap(arr[mid],arr[i]);
                i++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                 swap(arr[mid],arr[j]);
                 j--;
            }
        }
        }
};