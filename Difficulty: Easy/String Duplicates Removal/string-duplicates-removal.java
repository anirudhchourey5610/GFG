// User function Template for Java

class Solution {
    String removeDuplicates(String s) {
       boolean[] freq = new boolean[256];
       StringBuilder result = new StringBuilder();

       for(int i=0;i<s.length();i++){
           char ch=s.charAt(i);
           int idx=(int) ch;
           if(!freq[idx]){
               result.append(ch);
               freq[idx]=true;
           }
       }
        return result.toString();
    }
}
