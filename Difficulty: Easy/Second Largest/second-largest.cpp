class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int max1=-1;
        for(int i=0;i<arr.size();i++){
            if(max1<arr[i] && max!=max1 && max>arr[i]){
                max1=arr[i];
            }
        }
        return max1;
    }
};