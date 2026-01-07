class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> freq;
        int count=0;
        vector<int> ans;
        for(int i=0;i<k;i++){
            if(freq[arr[i]]==0){
                count++;
            }
            freq[arr[i]]++;
        }
          ans.push_back(count);
        for(int i=k;i<arr.size();i++){
            int out=arr[i-k];
            freq[out]--;
            if(freq[out]==0){
                count--;
            }
            int in=arr[i];
            if(freq[in]==0){
                count++;
            }
            freq[in]++;
            ans.push_back(count);
        }  
      return ans;
    }
};