class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int maxXOR=0;
        for(int i=0;i<k;i++){
            maxXOR=maxXOR^arr[i];
        }
        int newXOR=maxXOR;
        for(int i=1;i<=arr.size()-k;i++){
         newXOR=(newXOR^arr[i-1])^arr[i+k-1];
         if(newXOR>maxXOR){
        maxXOR=newXOR;
        }
        }
        return maxXOR;
    }
};