#include<bits/stdc++.h>
class Solution {
public:
    int f(vector<int>&nums,int n,int i,vector<int>&dp){
       
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int left=nums[i]+f(nums,n,i+2,dp);
        int right=f(nums,n,i+1,dp);
        return dp[i]=(left>right)?left:right;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(nums,n, 0,dp);
    }
};