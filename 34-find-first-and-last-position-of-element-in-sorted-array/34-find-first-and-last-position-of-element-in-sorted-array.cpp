class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        if(binary_search(nums.begin(),nums.end(),target)==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        auto it=lower_bound(nums.begin(),nums.end(),target);
        
        int front=it-nums.begin();
        auto iy=upper_bound(nums.begin(),nums.end(),target);
        
        int en=iy-nums.begin()-1;

        ans.push_back(front);
        ans.push_back(en);
        return ans;
    }
};