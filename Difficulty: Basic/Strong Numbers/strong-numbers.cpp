class Solution {
  public:
    int fact(int i){
        int ans=1;
        for(int j=i;j>=1;j--){
            ans=ans*j;
        }
        return ans;
    }
    int isStrong(int N) {
        // code here
        int temp=N;
        int sum=0;
        int ans=0;
        while(N>0){
            int lastDigi=N%10;
            sum = sum+fact(lastDigi);
            N=N/10;
        }
        if(sum==temp){
            ans=1;
        }
        return ans;
    }
};