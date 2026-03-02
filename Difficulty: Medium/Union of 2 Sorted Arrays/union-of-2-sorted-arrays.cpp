class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> temp;
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                if(temp.empty()){
                    temp.push_back(a[i]);
                }
                else if(temp.back()!=a[i]){
                    temp.push_back(a[i]);
                }
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                if(temp.empty()){
                    temp.push_back(a[i]);
                }
                else if(temp.back()!=a[i]){
                    temp.push_back(a[i]);
                }
                i++;
            }
            else if(a[i]>b[j]){
                if(temp.empty()){
                    temp.push_back(b[j]);
                }
                else if(temp.back()!=b[j]){
                    temp.push_back(b[j]);
                }
                j++;
            }
        }
        while(i<a.size()){
            if (temp.empty() || temp.back() != a[i]){
            temp.push_back(a[i]);
            }
                i++;
            }
             while(j<b.size()){
             if (temp.empty() || temp.back() != b[j])  {
             temp.push_back(b[j]);
             }
                j++;
            } 
        
        return temp;
    }
};