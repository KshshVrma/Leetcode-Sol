class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(nums[queries[i][1]]%2==0){
                if(queries[i][0]%2==0){
                    sum+=queries[i][0];
                    nums[queries[i][1]]+=queries[i][0];
                    ans.push_back(sum);
                }
                else{
                    sum-=nums[queries[i][1]];
                     nums[queries[i][1]]+=queries[i][0];
                     ans.push_back(sum);
                }
            }
            else{
                if(nums[queries[i][1]]%2!=0){
                if(queries[i][0]%2!=0){
                    sum+=queries[i][0]+nums[queries[i][1]];
                     nums[queries[i][1]]+=queries[i][0];
                     ans.push_back(sum);
                }
                else{
                    nums[queries[i][1]]+=queries[i][0];
                     ans.push_back(sum);
                }
            }
     
        
        }}
              
     return ans;
    }
};