class Solution {
public:
    int f(vector<int>&days,vector<int>&cost,int i,int n,vector<int>&dp){
        
        if(i>=n){
            
            return 0;
         
        }
        if(dp[i]!=-1){
            return dp[i];
        }
    
        int one=cost[0]+f(days,cost,i+1,n,dp);
       
        int ind;
        for(ind=i;ind<n&&days[ind]<days[i]+7;ind++);
        int week=cost[1]+f(days,cost,ind,n,dp);
        
          for(ind=i;ind<n&&days[ind]<days[i]+30;ind++);
            int month=cost[2]+f(days,cost,ind,n,dp);
            
        
 
        return dp[i]=min(one,min(week,month));
        
        
        
   }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
      int n=days.size();
        vector<int>dp(n,-1);
        return f(days,costs,0,n,dp);
    }
};