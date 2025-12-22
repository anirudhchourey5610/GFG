// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        vector<bool> table(26,false);
        string answer="";
        for(int i=0;i<s.size();i++){
         int idx=s[i]-'a';
         if(table[idx]==false){
             answer.push_back(s[i]);
             table[idx]=true;
         }
        }
        return answer;
    }
};