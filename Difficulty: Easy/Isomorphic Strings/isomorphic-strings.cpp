class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        vector<int> map1(26,-1);
        vector<int> map2(26,-1);
       
            for(int i=0;i<s1.length();i++){
                int c1 = s1[i] - 'a';
                int c2 = s2[i] - 'a';
                
                if (map1[c1] != -1 && map1[c1] != c2) return false;
            if (map2[c2] != -1 && map2[c2] != c1) return false;
            
            map1[c1] = c2;
            map2[c2] = c1;
            }
         return true;
    }
};