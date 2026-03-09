class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int n=txt.size();
        int m=pat.size();
        int idx=-1;
        if(n==1 && m==1){
            if(txt[n-1]==pat[m-1]){
                idx=0;
            }
        }
        for(int i=0;i<=n-m;i++){
            int j=0;
            while(j<m && txt[i+j]==pat[j]){
                j++;
            }
            if(j==m){
                idx=i;
                break;
            }
        }
        return idx;
    }
};