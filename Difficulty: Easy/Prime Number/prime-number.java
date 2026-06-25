class Solution {
    static boolean isPrime(int n) {
        // code here
        if(n==1 || n==0) return false;
        else if(n==2 || n==3) return true;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}