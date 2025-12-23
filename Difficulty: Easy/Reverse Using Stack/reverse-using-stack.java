class Solution {
    public String reverse(String S) {
        // code here
        Stack<Character> st = new Stack<>();
        for(int i=0;i<S.length();i++){
            st.push(S.charAt(i));
        }
        char[] result = new char[S.length()];
        int index=0;
        while(!st.empty()){
            result[index]=st.pop();
            index++;
        }
        return new String(result);
    }
}