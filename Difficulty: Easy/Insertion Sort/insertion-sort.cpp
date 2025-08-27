class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0;
        sorted(arr,n,i);
    }
    void sorted(vector<int>& arr,int n,int i){
        if(i==n) return;
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        sorted(arr,n,i+1);
    }
};