class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int n=a.size();
        int m=b.size();
        if(m>n){
            return false;
        }
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        for(int x:b){
            if(freq[x]==0){
                return false;
            }
            freq[x]--;
        }
        return true;
    }
};