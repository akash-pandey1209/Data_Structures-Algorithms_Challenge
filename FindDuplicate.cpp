class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans;
        for(int i=0; i<nums.size(); i++){
            mp[i]++;
        }
        for(auto x: mp){
            if(mp.find(x)==2){
                ans= mp->first;

            }
        }

        return ans;
    }
};