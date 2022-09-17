class Solution {
private:
    void findCombinations(int index,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        
        if(target == 0){
            ans.emplace_back(ds);
            return;
        }
        for(int i=index ; i<arr.size() ; i++){
            if(i>index and arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break; //in right of arr[i] no other elements will fit in target
            ds.emplace_back(arr[i]);
            findCombinations(i+1,target-arr[i],arr,ds,ans);
            ds.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int>ds;
        findCombinations(0,target,candidates,ds,ans);
        return ans;
    }
};