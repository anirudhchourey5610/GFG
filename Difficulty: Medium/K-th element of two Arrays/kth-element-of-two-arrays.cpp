class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> merge;
        for(int i=0;i<a.size();i++){
            merge.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            merge.push_back(b[i]);
        }
        sort(merge.begin(),merge.end());
        return merge[k-1];
    }
};