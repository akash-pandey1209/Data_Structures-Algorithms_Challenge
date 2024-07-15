class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        for(int i =0; i<nums.size(); i++){
            int num = nums[i];
            int onemore = target-num;
            if(mp.find(onemore)!=mp.end()){
                return{mp[onemore],i};
            }
            mp[nums[i]]=i;

        }

        return{-1,-1};
        
    }
};