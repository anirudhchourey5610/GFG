class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int cnt=1,maxi=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                cnt++;
            }
            else{
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};