class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<string> words;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                temp.push_back(s[i]);
            }
            else if(s[i]=='.'){
                if(!temp.empty()){
                    words.push_back(temp);
                }
                temp.clear();
            }
        }
        if(!temp.empty()){
                    words.push_back(temp);
        }
        reverse(words.begin(),words.end());
        string ans="";
        for(int i=0;i<words.size();i++){
            if(i>0){
                ans+='.';
            }
                ans+=words[i];
        }
        return ans;
    }
};