class Solution {
public:
    void dfs(int &sr,int &sc,vector<vector<int>>&arr,vector<vector<int>>&image,int &color,int delr[],int delc[],int &curr,int &n,int &m){
        arr[sr][sc]=color;
        int nrow;int ncol;
        for(int i=0;i<4;i++){
            nrow=sr+delr[i];
            ncol=sc+delc[i];
            if(nrow<n&&nrow>=0&&ncol<m&&ncol>=0  && arr[nrow][ncol]!=color&&image[nrow][ncol]==curr){
                dfs(nrow,ncol,arr,image,color,delr,delc,curr,n,m);
            }
        }
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>arr=image;
        int curr=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        int delr[4]={-1,0,1,0};
        int delc[4]={0,1,0,-1};
        dfs(sr,sc,arr,image,color,delr,delc,curr,n,m);
        return arr;
    }
};