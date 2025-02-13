class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            unordered_map<int,int> m;
                int check;
    
                for(auto n: nums){
                    m[n]++;
                        if(m[n] >=2){
                            check=n;
                            break;
                        }
                    }
                return check;
        }
    };