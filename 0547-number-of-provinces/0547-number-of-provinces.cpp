class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<int>adj[]){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
        
            // for(int j=0;j<adj[i].size();j++){
            //     if(!vis[adj[i][j]]){
            //         dfs(j,vis,adj);
            //         return ;
            //     }
            // }
        
        
    }
    int findCircleNum(vector<vector<int>>& is) {
        int n=is.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(is[i][j]==1&&i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,adj);
                
            }
        }
        return count;
    }
};