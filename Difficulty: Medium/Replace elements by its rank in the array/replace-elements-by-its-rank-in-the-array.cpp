// User function Template for C++

class Solution {
  public:

    vector<int> replaceWithRank(vector<int> &arr, int N) {
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> rankMap;
        int rank=1;
        for(int i=0;i<N;i++){
            if(rankMap.find(temp[i])==rankMap.end()){
                rankMap[temp[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<N;i++){
            arr[i]=rankMap[arr[i]];
        }
        return arr;
    }
};
