class Solution {
    private:
    int pivotIndex(vector<int>& arr){
        int low=0,high=arr.size()-1;
        int mid=low+(high-low)/2;
        while(low<high){
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else {
            high=mid;
        }
        mid=low+(high-low)/2;
        }
        return high;
    }
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int pivot=pivotIndex(arr);
        int right=upper_bound(arr.begin()+pivot,arr.end(),x)-(arr.begin()+pivot);
        int left=upper_bound(arr.begin(),arr.begin()+pivot,x)-arr.begin();
        return right+left;
    }
};