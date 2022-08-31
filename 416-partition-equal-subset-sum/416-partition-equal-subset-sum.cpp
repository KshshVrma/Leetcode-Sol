class Solution {
public:
    int f(vector<int>&nums,int i,int sum,int n,int tar,vector<vector<int>>&dp){
         if(sum==tar){
            return 1;
        }
        if(i==n){
            return 0;
        }
      
        if(sum>tar){
            return 0;
        }
        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }
        return dp[i][tar]=f(nums,i+1,sum+nums[i],n,tar-nums[i],dp)||f(nums,i+1,sum,n,tar,dp);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int tar=0;
        
       
        for(int i=0;i<nums.size();i++){
            tar+=nums[i];
        }
        if(tar%2==1){
            return 0;
        }
         vector<vector<int>>dp(n,vector<int>(tar+1,-1));
        return f(nums,0,0,n,tar,dp);
    }
};