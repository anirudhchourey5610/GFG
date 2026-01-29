class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        long long Sorg=(n*(n+1))/2;
        long long Sar=0;
        for(int i=0;i<n-1;i++){
            Sar=Sar+arr[i];
        }
        return Sorg-Sar;
    }
};