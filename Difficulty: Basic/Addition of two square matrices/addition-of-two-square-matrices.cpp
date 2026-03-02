// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        int n=matrixA.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrixA[i][j] += matrixB[i][j];
            }
        }
    }
};