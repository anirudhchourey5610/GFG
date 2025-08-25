class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int> result;
        for(int i=0;i<arr.size();i++){
            result[arr[i]]++;
        }
        vector<int> freq(n,0);
        for(int i=1;i<=n;i++){
            freq[i-1]=result[i];
        }
        return freq;
    }
};
