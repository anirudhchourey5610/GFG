class Solution {
  public:
    int atMost(vector<int>& arr,int k){
        int left=0;
        int right=0;
        int oddCount=0;
        int totalSubarrays=0;
        while(right<arr.size()){
            if(arr[right]%2!=0){
                oddCount++;
            }
            while(oddCount>k){
                if(arr[left]%2!=0){
                    oddCount--;
                }
                 left++;
            }
            totalSubarrays=totalSubarrays+right-left+1;
            right++;
        }
        return totalSubarrays;
    }
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return atMost(arr,k)-atMost(arr,k-1);
    }
};