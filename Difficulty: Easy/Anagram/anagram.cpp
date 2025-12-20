class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int freqTable[256]={0};
        for(int i=0;i<s1.size();i++){
            freqTable[s1[i]]++;
        }
        for(int j=0;j<s2.size();j++){
            freqTable[s2[j]]--;
        }
        for(int i=0;i<256;i++){
            if(freqTable[i]!=0){
                return false;
            }
        }
        return true;
    }
};