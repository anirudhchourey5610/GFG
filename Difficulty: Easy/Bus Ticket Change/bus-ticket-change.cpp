class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int f=0;
        int t=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5){
                f++;
            }
            else if(arr[i]==10){
                if(f==0){
                    return false;
                }
                else{
                    f--;
                    t++;
                }
            }
            else if(arr[i]==20){
                if(t>0 && f>0){
                    t--;
                    f--;
                }
                else if(f>=3){
                    f=f-3;
                }
                else{
                    return false;
                }
            }
        }
         return true;
    }
};