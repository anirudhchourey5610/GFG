// User function Template for C++

class Solution {
  public:
    bool isPrime(int i){
        if(i<=1) return false;
        if(i==2 || i==3) return true;
        if(i%2==0) return false;
        for(int j=3;j*j<=i;j++){
            if(i%j==0){
                return false;
            }
        }
        return true;
    }
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> ans;
        for(int i=M;i<=N;i++){
            if(isPrime(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};