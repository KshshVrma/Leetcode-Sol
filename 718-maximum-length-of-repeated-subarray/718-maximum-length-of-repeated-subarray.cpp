class Solution {
public:
    int solve(int ind1,int ind2,vector<int>& nums1, vector<int>& nums2,int &ans,vector<vector<int>>&dp){
        if(ind1==nums1.size() || ind2==nums2.size()) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        dp[ind1][ind2]=0;
        if(nums1[ind1]==nums2[ind2]){
           dp[ind1][ind2]=1+ solve(ind1+1,ind2+1,nums1,nums2,ans,dp);
        }
       solve(ind1+1,ind2,nums1,nums2,ans,dp);
        solve(ind1,ind2+1,nums1,nums2,ans,dp);
        ans= max(ans,dp[ind1][ind2]);
        return dp[ind1][ind2];
        
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        int ans=INT_MIN;
         solve(0,0,nums1,nums2,ans,dp);
        return ans;
    }
};
