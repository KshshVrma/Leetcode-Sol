class Solution {
public:
    int tab(string a,string b){
        vector<vector<int>>dp(a.length()+1,vector<int>(a.length()+1,0));
        for(int i=0;i<a.length()+1;i++){
            for(int j=0;j<a.length()+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=a.length();i++){
            for(int j=1;j<=a.length();j++){
           
   if(a[i-1]==b[j-1]){

      dp[i][j]=1+dp[i-1][j-1];
   }
                else{
                      int one=dp[i][j-1];
   int two=dp[i-1][j];
    dp[i][j]=max(one,two);
                
                }
 
            }
        }
        return dp[a.length()][a.length()];
    }
    
    int f(string a,string b,int i,int j,vector<vector<int>>&dp){

   if(i<0||j<0){
      return 0;
   }
   if(dp[i][j]!=-1){
      return dp[i][j];
   }
   if(a[i]==b[j]){

      return dp[i][j]=1+f(a,b,i-1,j-1,dp);
   }
   int one=f(a,b,i,j-1,dp);
   int two=f(a,b,i-1,j,dp);
   return dp[i][j]=max(one,two);
}

    int minInsertions(string s) {
  
string b=s;
reverse(b.begin(),b.end());
int i=b.length();
vector<vector<int>>dp(i,vector<int>(i,-1));
// return i-f(s,b,i-1,i-1,dp);
        return i-tab(s,b);
    }
};