class Solution {
  public:
    void reverseArray(vector<int> &arr,int s=0,int e=-1) {
        // code here
        if(e==-1){
            e=arr.size()-1;
        }
        if(s>=e){
            return ;
        }
        swap(arr[s],arr[e]);
        reverseArray(arr,s+1,e-1);
    }
};