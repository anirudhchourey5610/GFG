class Solution {
  public:
    int binary_to_decimal(int B) {
        // Code here
        string str_B =to_string(B);
        int deci=0;
        int power=0;
        for(int i=str_B.length()-1;i>=0;i--){
            if(str_B[i]=='1'){
                deci=deci+pow(2,power);
            }
            power++;
        }
        return deci;
    }
};