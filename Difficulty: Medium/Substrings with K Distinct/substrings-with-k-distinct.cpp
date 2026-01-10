class Solution {
  public:
    int atMost(string& s, int k){
        vector<int> freq(26);
        int left=0;
        int right=0;
        int count=0;
        int totalSubarray=0;
        while(right<s.size()){
            int i=s[right]-'a';
            if(freq[i]==0){
                count++;
            }
            freq[i]++;
            if(count>k){
            while(count>k){
                int j=s[left]-'a';
                freq[j]--;
                if(freq[j]==0){
                    count--;
                }
                left++;
            }
            }
            totalSubarray=totalSubarray+right-left+1;
            right++;
        }
        return totalSubarray;
    }
    int countSubstr(string& s, int k) {
        // code here
        return atMost(s,k)-atMost(s,k-1);
    }
};