class Solution {
  public:
  int fact(int n){
      if(n==0 || n==1){
          return 1;
      }
      return n*fact(n-1);
  }
    void factorial(int n) {
        // code here
        int ansFinal=fact(n);
        cout<<ansFinal<<endl;
    }
};