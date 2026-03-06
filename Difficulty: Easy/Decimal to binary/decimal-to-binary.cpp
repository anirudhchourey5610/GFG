class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string bin="";
    while(n!=0){
        bin+=std::to_string(n%2);
        n=n/2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
    }
};