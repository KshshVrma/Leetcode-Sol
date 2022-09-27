class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            // int count=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    int flag=0;
                if(i+1<grid.size()){
                    if(grid[i+1][j]==1){
                        flag++;
                    }
                }
                if(j+1<grid[i].size()){
                    if(grid[i][j+1]==1){
                        flag++;
                    }
                }
                    if(j>=1){
                        if(grid[i][j-1]==1){
                            flag++;
                        }
                    }
                    if(i>=1){
                        if(grid[i-1][j]==1){
                            flag++;
                        }
                    }
                    ans+=4-flag;
                    
                    
                    
                    
                }
                
            }
        }
        return ans;
    }
};