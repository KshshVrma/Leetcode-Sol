class Solution {
public:
    int f(int k,vector<int>&prices,int i,int n,int buy,vector<vector<vector<int>>>&dp){
        if(i==n||k==0){
            return 0;
        }
        if(dp[i][buy][k]!=-1){
            return dp[i][buy][k];
        }
        int p=0,t=0;
        if(buy)
         p=max(-prices[i]+f(k,prices,i+1,n,0,dp),f(k,prices,i+1,n,1,dp));
        else{
             t=max(prices[i]+f(k-1,prices,i+1,n,1,dp),f(k,prices,i+1,n,0,dp));
            
        }
        return dp[i][buy][k]=max(p,t);
        
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(k,prices,0,n,1,dp);
    }
};