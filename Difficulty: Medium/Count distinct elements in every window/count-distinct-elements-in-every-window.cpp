class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> freq;
        vector<int> finalAns;
        for(int i=0;i<k;i++){
            freq[arr[i]]++;
        }
        finalAns.push_back(freq.size());
        for(int i=k;i<arr.size();i++){
           freq[arr[i-k]]--;
            if(freq[arr[i-k]]==0){
                freq.erase(arr[i-k]);
            }
            freq[arr[i]]++;
            finalAns.push_back(freq.size());
        }
        return finalAns;
    }
};