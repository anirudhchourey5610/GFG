
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        map<char, int> freq;
      for (char ch : s) {
           freq[ch]++;
           }
           char ans='$';
        for (char ch : s) {
            if (freq[ch] == 1) {
                ans=ch;
                break;
            }
        }
        return ans;
    }
};