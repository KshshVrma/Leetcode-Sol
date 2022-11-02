class Solution {
public:
    
    void bfs(int n,int m,vector<vector<char>>&grid,vector<vector<int>>&vis,int i,int j){
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int one=q.front().first;
            int two=q.front().second;
            q.pop();

            
           int  row=one+1,col=two;
                    if(row<n&&col<m&&row>=0&&col>=0&&vis[row][col]!=1 &&grid[row][col]=='1'){
                        vis[row][col]=1;
                        q.push({row,col});
                    }
            row=one,col=two+1;
                     if(row<n&&col<m&&row>=0&&col>=0&&vis[row][col]!=1 &&grid[row][col]=='1'){
                        vis[row][col]=1;
                        q.push({row,col});
                    }
            row=one-1,col=two;
             if(row<n&&col<m&&row>=0&&col>=0&&vis[row][col]!=1 &&grid[row][col]=='1'){
                        vis[row][col]=1;
                        q.push({row,col});
                    }
            row=one,col=two-1;
             if(row<n&&col<m&&row>=0&&col>=0&&vis[row][col]!=1 &&grid[row][col]=='1'){
                        vis[row][col]=1;
                        q.push({row,col});
                    }
            
                    
                
            
            
            
        }
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    count++;
                    bfs(n,m,grid,vis,i,j);
                }
            }
        }
        return count;
    }
};