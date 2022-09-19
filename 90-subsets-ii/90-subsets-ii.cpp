class Solution {
private:
    void findSubsets(int index,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
        ans.emplace_back(ds);
        for(int i=index; i<nums.size() ;i++){
            if(i != index and nums[i] == nums[i-1])continue;
            ds.emplace_back(nums[i]);
            findSubsets(i+1,ds,nums,ans);
            ds.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        sort(nums.begin(),nums.end());
        findSubsets(index,ds,nums,ans);
        return ans;
    }
};