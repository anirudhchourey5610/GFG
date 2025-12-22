class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int total=0;
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i=0;i<s.length()-1;i++){
            int curr=mp[s[i]];
            int next=mp[s[i+1]];
            if(mp[s[i]]<mp[s[i+1]]){
                total=total-curr;
            }
            else {
                total=total+curr;
            }
        }
        int lastIndex=s.length()-1;
        return total + mp[s[lastIndex]];
    }
};