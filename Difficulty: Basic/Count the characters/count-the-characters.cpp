
class Solution {
  public:
    int getCount(string S, int N) {
        // code here.
        unordered_map<char,int> freq;
        int i=0;
        int n=S.length();
        while(i<n){
            char ch=S[i];
            freq[ch]++;
            while(i<n && S[i]==ch){
                i++;
            }
        }
        int c=0;
        for(auto it:freq){
            if(it.second==N){
                c++;
            }
        }
        return c;
    }
};