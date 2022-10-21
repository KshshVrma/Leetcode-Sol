class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==1){
            return false;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
          int t=nums[i];
            auto it=mp.find(t);
            if(it!=mp.end()){
                if(abs(it->second-i)<=k)return true;
            }
            mp[nums[i]]=i;
    }
        return false;
    
    }
};