class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int midcol=(low+high)/2;
            int maxRow=0;
            for(int i=1;i<n;i++){
                if(mat[i][midcol] >  mat[maxRow][midcol]){
                    maxRow=i;
                }
            }
            int leftele=INT_MIN,rightele=INT_MIN;
            if(midcol>0){
             leftele=mat[maxRow][midcol-1];
            }
            if(midcol<m-1){
             rightele=mat[maxRow][midcol+1];
            }
            if(mat[maxRow][midcol] >= leftele && mat[maxRow][midcol] >= rightele){
                ans={maxRow,midcol};
                break;
            }
            if(leftele > mat[maxRow][midcol]){
                high=midcol-1;
            }
            else{
                low=midcol+1;
            }
        }
        return ans;
    }
};
