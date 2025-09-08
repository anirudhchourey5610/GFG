// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int unique=0;
        for(int i=0;i<arr.size();i++){
            unique=unique^arr[i];
        }
        return unique;
    }
};