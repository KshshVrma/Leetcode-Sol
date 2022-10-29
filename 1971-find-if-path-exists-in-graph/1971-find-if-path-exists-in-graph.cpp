class Solution {
public:
   void dfs(int src, int dst, vector<int> adj[], vector<int> &vis)
{
    vis[src] = 1;
    for(auto it : adj[src])
    {
        if(!vis[it])
        {
            dfs(it,dst,adj,vis);
        }
    }
}

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(n,0);
        dfs(source,destination,adj,vis);
        if(vis[source] && vis[destination]) return true;
        return false;

    }
};