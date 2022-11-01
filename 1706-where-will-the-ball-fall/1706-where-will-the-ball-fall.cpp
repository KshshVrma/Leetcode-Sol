class Solution {
public:
   int solve(int r, int c, vector<vector<int>>& grid){
        if(r==grid.size()) return c;
        
        if(grid[r][c]==1){
            if(c+1<grid[0].size() && grid[r][c+1]!=-1)return solve(r+1,c+1,grid); 
        }
        
        else {
            if(c-1>=0 && grid[r][c-1]!=1)return solve(r+1,c-1,grid);
        }
        
        return -1;
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>res;

        for(int i=0;i<grid[0].size();i++){
            res.push_back(solve(0,i,grid));
        }
        
        return res;
    }
};