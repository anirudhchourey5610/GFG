// User function Template for Java

class Solution {
    public String removeConsecutiveCharacter(String s) {
        // code here
        StringBuilder ans = new StringBuilder();
        if(s.length()==1){
            return s;
        }
        ans.append(s.charAt(0));
        for(int i=1;i<=s.length()-1;i++){
            if(ans.charAt(ans.length()-1)!=s.charAt(i)){
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}