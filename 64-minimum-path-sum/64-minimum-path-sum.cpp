class Solution {
public:
    
    int f(vector<vector<int>>&grid,int i,int j,vector<vector<int>>&dp){
        if((i==grid.size()-1)&&(j==grid[0].size()-1)){
            return grid[i][j];
        }
        if(i>=grid.size()||j>=grid[0].size()){
            return 1e8;
        }
        if( dp[i][j]!=-1){
            return dp[i][j];
        }
        int k;
       
            k=f(grid,i+1,j,dp);
        
        int l;
       
            l=f(grid,i,j+1,dp);
        
        
        return dp[i][j]=grid[i][j]+min(k,l);
    }
    int minPathSum(vector<vector<int>>& grid) {
             int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int temp= f(grid,0,0,dp);
   
        
        if(temp>=1e8){
            return -1;
        }
        return temp;
    }
};