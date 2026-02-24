class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n<2){
            return {-1};
        }
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<min1){
                min2=min1;
                min1=arr[i];
            }
            else if(arr[i]>min1 && arr[i]<min2){
                min2=arr[i];
            }
        }
        if(min2==INT_MAX){
            return {-1};
        }
         return {min1,min2};
    }
};