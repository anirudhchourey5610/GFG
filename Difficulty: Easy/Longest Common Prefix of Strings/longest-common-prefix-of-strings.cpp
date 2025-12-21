// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string minStr=arr[0];
        for(int i=1;i<arr.size();i++){
            if(minStr.length()>arr[i].length()){
                minStr=arr[i];
            }
        }
        string prefix=minStr;
        while(!prefix.empty()){
            bool isValid = true;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<prefix.length();j++){
                if(prefix[j]!=arr[i][j]){
                    isValid=false;
                    break;
                }
            }
            if(!isValid) break;
        }
        if(isValid) {return prefix;}
        prefix.pop_back();
        }
        return "";
    }
};