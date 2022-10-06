class Solution {
public:
//     int tab(string a,string b){
//          int t=a.length(),p=b.length();
//         vector<vector<int>>dp(t+1,vector<int>(p+1,0));
//         for(int j=0;j<b.length();j++){
//             dp[a.length()][j]=b.length()-j;
//         }
//          for(int i=0;i<a.length();i++){
//             dp[i][b.length()]=a.length()-i;
//         }
        
//         for(int i=a.length()-1;i>=0;i--){
//             for(int j=b.length()-1;j>=0;j--){
                
//                 if(a[i]==b[j]){
//             dp[i][j]= dp[i+1][j+1];
//         }else{
//             int insert=1+dp[i][j+1];
//             int del=1+dp[i+1][j];
//             int rep=1+dp[i+1][j+1];
//             dp[i][j]=min(insert,min(del,rep));
//         }
        
   
                
                
//             }
//         }
//         return dp[0][0];
        
//     }
    int f(string a,string b,int i,int j,vector<vector<int>>&dp){
// if(i==0&&j==0){
//    if(a[i]==b[j]){
//       return 0;
//    }
// }
if(i<0){
   return j+1;
}
if(j<0){
   return i+1;
}
if(dp[i][j]!=-1){
   return dp[i][j];
}

int ans=0;
if(a[i]==b[j]){
  return dp[i][j]= f(a,b,i-1,j-1,dp);
}

else{
int two=1+f(a,b,i-1,j-1,dp);
int three=1+f(a,b,i-1,j,dp);
int four=1+f(a,b,i,j-1,dp);
ans=min(two,min(three,four));
}
        return dp[i][j]=ans;
    }
    
//     int solve(string a, string b,int i,int  j, vector<vector<int>>&dp ){
//         if(i==a.length()){
//            return b.length()-j;
                
//             }
            
//             if(j==b.length()){
//                 return a.length()-i;
//             }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         int ans=0;
        
//         if(a[i]==b[j]){
//             return solve(a,b,i+1,j+1,dp);
//         }else{
//             int insert=1+solve(a,b,i,j+1,dp);
//             int del=1+solve(a,b,i+1,j,dp);
//             int rep=1+solve(a,b,i+1,j+1,dp);
//             ans=min(insert,min(del,rep));
//         }
        
//         return dp[i][j]=ans;
        
        
//     }
    
    
    int minDistance(string a, string b) {
        
        // int i=word1.length(),j=word2.length();
        // vector<vector<int>>dp(i,vector<int>(j,-1));
        int i=a.length();int j=b.length();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        return f(a,b,i-1,j-1,dp);
        // return tab(word1,word2);
    }
};