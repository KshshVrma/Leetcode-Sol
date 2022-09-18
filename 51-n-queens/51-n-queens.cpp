class Solution {
public:
    bool issafe(int row,int col,vector<string>board,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0&&col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        col=dupcol;
        row=duprow;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col=dupcol;
        row=duprow;
        while(row<n&&col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<string>&board,vector<vector<string>>&ans,int col,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]='Q';
                solve(board,ans,col+1,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n);
            string temp(n,'.');
        for(int i=0;i<n;i++){
            board[i]=(temp);
        }
        solve(board,ans,0,n);
            return ans;
        
    }
};