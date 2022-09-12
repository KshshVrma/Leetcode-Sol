class Solution {
public:
    
  int  solve(vector<int>cost,int i,int n,vector<int>&mp){
        if(i==n){
            return 0;
        }
      if(i>n){
          return 1e9;
      }
      if(mp[i]!=-1){
          return mp[i];
      }
        int t=cost[i]+min(solve(cost,i+1,n,mp),solve(cost,i+2,n,mp));
      return mp[i]=t;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
       
       int n=cost.size();
        
 vector<int>mp(n,-1);
        int k=solve(cost,0,n,mp);
        int p=solve(cost,1,n,mp);
        
        return min(k,p);
    }
};