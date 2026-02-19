
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        int n=arr.size();
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }
};
