class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int , int> cnt;
    
            for(int i = 0 ; i< nums.size() ; i++){
                int comp = target - nums[i];
                if(cnt.find(comp) != cnt.end()){
                    return {cnt[comp]  , i};
                }
    
                cnt[nums[i]] = i;
            } 
    
            return {};
        }
    };