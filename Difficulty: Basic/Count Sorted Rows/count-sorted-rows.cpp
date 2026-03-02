// User function Template for C++

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
        int count=0;
        for(int i=0;i<N;i++){
        bool isInc=true;
        bool isDec=true;
        for(int j=0;j<M-1;j++){
            if(Mat[i][j]>=Mat[i][j+1]){
                isInc=false;
            }
            if(Mat[i][j]<=Mat[i][j+1]){
                isDec=false;
            }
        }
        if(isInc || isDec){
            count++;
        }
        }
        return count;
    }
};