// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans="";
        for(int i=0;i<s.length();i++){
            if(('a'<=s[i] && 'z'>=s[i])||('A'<=s[i] && 'Z'>=s[i])){
                ans.push_back(s[i]);
            }
        }
        if(ans.empty()){
            return "-1";
            
        }
        return ans;
    }
};