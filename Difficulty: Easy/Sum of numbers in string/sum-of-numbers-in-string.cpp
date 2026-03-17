class Solution {
  public:
    int findSum(string& s) {
        // code here
        int sum=0;
        int curr_numb=0;
        for(int i=0;i<s.size();i++){
            if('0'<=s[i] && s[i]<='9'){
                curr_numb=curr_numb*10+(s[i]-'0');
            }
            else{
                sum=sum+curr_numb;
                curr_numb=0;
            }
        }
        sum=sum+curr_numb;
        return sum;
    }
};