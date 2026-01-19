class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        const long long MOD = 1000000007;
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=0;i<arr.size();i++){
            ans = (ans + 1LL * arr[i] * i) % MOD;
        }
        return int(ans);
    }
};