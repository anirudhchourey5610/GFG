class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        if(s1.length()<=2 && s2.length()<=2){
            if(s1==s2){
                return true;
            }
            else{
                return false;
            }
        }
        if(s1.length()>2 && s2.length()>2){
            string left="";
            string right="";
           for(int i=2;i<s1.length();i++){
               left.push_back(s1[i]);
           }
           left.push_back(s1[0]);
           left.push_back(s1[1]);
           right.push_back(s1[s1.length()-2]);
           right.push_back(s1[s1.length()-1]);
           for(int i=0;i<=s1.length()-3;i++){
               right.push_back(s1[i]);
           }
           if(left==s2 || right==s2){
               return true;
           }
           else{
               return false;
           }
        }
    }
};
