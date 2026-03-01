class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int minpricesofar=prices[0];
        int profit=0;
        int maxProfit=0;
        for(int i=1;i<n;i++){
            if(minpricesofar>prices[i]){
                minpricesofar=prices[i];
            }
            profit=prices[i]-minpricesofar;
            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }
};
