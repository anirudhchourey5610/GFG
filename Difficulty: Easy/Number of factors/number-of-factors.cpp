class Solution {
  public:
    int countFactors(int n) {
        // code here
        int c=1;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                c++;
            }
        }
        return c;
    }
};