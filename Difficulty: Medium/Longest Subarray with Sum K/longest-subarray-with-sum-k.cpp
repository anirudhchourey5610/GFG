class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int prefixSum=0;
        int maxLen=0;
        unordered_map<long long,int> mp;
        for(int i=0;i<arr.size();i++){
            prefixSum+=arr[i];
            if(prefixSum==k){
                maxLen=i+1;
            }
            if(mp.find(prefixSum-k)!=mp.end()){
                maxLen=max(maxLen,i-mp[prefixSum-k]);
            }
            if(mp.find(prefixSum)==mp.end()){
                mp[prefixSum]=i;
            }
        }
        return maxLen;
    }
};