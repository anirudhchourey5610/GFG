// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        int leftSum=0;
        int totalSum=0;
        string ans="false";
        for(int i=0;i<arr.size();i++){
            totalSum=totalSum+arr[i];
        }
        for(int i=0;i<arr.size();i++){
            int rightSum=totalSum-leftSum-arr[i];
            if(leftSum==rightSum){
                ans="true";
                break;
            }
            leftSum=leftSum+arr[i];
        }
        return ans;
    }
};