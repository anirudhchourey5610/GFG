class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        return {min,max};
    }
};