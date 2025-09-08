class Solution {
public:
    bool twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            int required=target-current;
            if(m.find(required)!=m.end()){
                return true;
            }
            else{
                m[current]=i;
            }
        }
        return false;
    }
};