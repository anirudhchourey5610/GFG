class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int i=0;
        int j=0;
        int c=0;
        while(i<arr.size()&&j<arr.size()){
            while(i<arr.size() && arr[i]!='P') {
                i++;
            }
            while(j<arr.size() && arr[j]!='T') {
                j++;
            }
            if(i<arr.size()&&j<arr.size()){
            if(abs(i-j)<=k){
                c++;
                i++;
                j++;
            }
            else if(j<i-k){
                j++;
            }
            else {
                i++;
            }
            }
        }
        return c;
    }
};