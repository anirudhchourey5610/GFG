class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int left=0;
        int right=0;
        unordered_map<int,int> freq;
        int count=0;
        int totalSubarray=0;
        while(right<arr.size()){
            if(freq[arr[right]]==0){
                count++;
            }
            freq[arr[right]]++;
            if(count>k){
            while(count>k){
                freq[arr[left]]--;
                if(freq[arr[left]]==0){
                    count--;
                }
                left++;
            }
            }
            totalSubarray=totalSubarray+right-left+1;
            right++;
        }
        return totalSubarray;
    }
};