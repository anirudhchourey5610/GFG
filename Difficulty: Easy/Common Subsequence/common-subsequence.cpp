// User function template for C++
class Solution {
  public:
    bool commonSubseq(string a, string b) {
        // your code here
        bool freq[256]={false};
        for(char c:a){
            freq[c]=true;
        }
        for(char c:b){
            if(freq[c]) return true;
        }
        return false;
    }
};