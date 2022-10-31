class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==1||n==1)return true;
        int a=0;
        int b=0;
        for(int i=0;i<m;i++){
            int temp=matrix[i][0];
            a=i;b=0;
            while(b<n&&a<m){
                if(matrix[a][b]!=temp)return false;
                a++;
                b++;
            }
        }
        a=0;
        b=0;
        for(int i=1;i<n;i++){
            int temp=matrix[0][i];
            b=i;a=0;
            while(a<m&&b<n){
                if(temp!=matrix[a][b])return false;
                a++;
                b++;
            }
        }
        return true;
    }
};