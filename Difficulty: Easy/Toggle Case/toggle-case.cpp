class Solution {
  public:
    string toggleCase(string &s) {
        // code here
     for(int i=0;i<s.length();i++){
         if('a'<=s[i] && 'z'>=s[i]){
             s[i]=toupper(s[i]);
         }
         else if('A'<=s[i] && 'Z'>=s[i]){
             s[i]=tolower(s[i]);
         }
     }
     return s;
    }
};