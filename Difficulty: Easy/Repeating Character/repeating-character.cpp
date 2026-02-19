class Solution {
  public:
    int repeatedCharacter(string& s) {
        // code here
        int ans=-1;
        unordered_map<char,int> freq;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]]>1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};