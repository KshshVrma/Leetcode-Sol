#define ll long long int
#define mod 1e9+7
class Solution {
public:
    ll f(int s,int e,int k,int i,vector<vector<int>>&dp,int b){
         if(i==e&&k==0){
             return 1;
         }
         if(k==0&&i!=e){
             return 0;
         }
         if(dp[i-b][k]!=-1){
             return dp[i-b][k];
         }
         int left=f(s,e,k-1,i+1,dp,b);
         int right=f(s,e,k-1,i-1,dp,b);
         return dp[i-b][k]=(left+right)%1000000007;
         
       
    }
    int numberOfWays(int startPos, int endPos, int k) {
        int t=k*2+1;
        int b=startPos-k;
        vector<vector<int>>dp(t,vector<int>(k+1,-1));
        return f(startPos,endPos,k,startPos,dp,b);
    }
};


