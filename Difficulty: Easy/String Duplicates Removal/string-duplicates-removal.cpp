// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> freq;
        string result=" ";
        for(char c:s){
            if(freq.find(c)==freq.end()){
                result.push_back(c);
                freq.insert(c);
            }
        }
        return result;
    }
};