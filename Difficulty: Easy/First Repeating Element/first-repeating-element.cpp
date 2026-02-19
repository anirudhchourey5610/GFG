class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int ans=-1;
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]>1){
                ans=i+1;
                break;
            }
        }
        return ans;
    }
};