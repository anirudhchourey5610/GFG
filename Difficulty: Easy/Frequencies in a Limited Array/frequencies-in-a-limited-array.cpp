class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans(n,0);
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=1;i<=arr.size();i++){
            if(freq.find(i)!=freq.end()){
                ans[i-1]=freq[i];
            }
        }
        return ans;
    }
};
