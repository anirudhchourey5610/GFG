class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int min=arr[0];
        for(int i=0;i<arr.size();i++){
            if(min<arr[i]){
                min=arr[i];
            }
        }
        return min;
    }
};
