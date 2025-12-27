class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n=mat.size();
        int low=mat[0][0];
        int high=mat[n-1][n-1];
        while(low<=high){
            int mid=(high+low)/2;
            int cnt=0;
            int row=0;
            int col=n-1;
            while(row<n && col>=0){
            if(mat[row][col]<=mid){
                cnt=cnt+col+1;
                row++;
            }
            else if(mat[row][col]>mid){
                col--;
            }
            }
            if(cnt<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
