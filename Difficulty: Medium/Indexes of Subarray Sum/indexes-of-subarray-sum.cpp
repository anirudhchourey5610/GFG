class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int left=0,right=0,currSum=0;
        while(right<arr.size()){
        currSum=currSum+arr[right];
            while(currSum>target){
                currSum=currSum-arr[left];
                 left++;
            }
            if(currSum==target){
            return {left+1,right+1};
        }
                            right++;
            }
        return {-1};
    }
};