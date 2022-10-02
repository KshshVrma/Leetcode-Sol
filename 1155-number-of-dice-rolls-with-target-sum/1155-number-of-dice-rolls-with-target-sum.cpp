class Solution {
public:
   const int mod = 1e9+7;
    //Memoization Approach
      int dp[31][10001];
      int helper(int dice,int k,int target){
         if(target < 0)return 0;
         if(dice == 0 and target !=0)return 0;
         if(target == 0 and dice == 0)return 1;
         if(dp[dice][target] != -1)return dp[dice][target];
         int ans = 0;
         for(int i = 1;i<=k;i++){
            ans+=helper(dice-1,k,target-i);
            ans%=mod;
         };
         return dp[dice][target] = ans%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        
        //Memoization Approach
         memset(dp,-1,sizeof(dp));
         return helper(n,k,target);
    }
};