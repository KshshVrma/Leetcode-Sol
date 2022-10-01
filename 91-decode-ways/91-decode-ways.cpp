class Solution {
public:
    
    //Recursive using dp
    int helper(string &s, int ind, vector<int> &dp){
        if(ind >= s.size())
            return 1;
        if(s[ind] == '0')
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int ans = 0;
        ans = ans + helper(s, ind+1, dp);
        if(ind < s.size()-1 and stoi(s.substr(ind, 2))<=26)
            ans = ans + helper(s, ind+2, dp);
        return dp[ind] = ans;
    }
  int numDecodings(string s) {
        if(s[0]=='0')
            return 0;
        vector<int> dp(s.size()+1, -1);
        return helper(s, 0, dp);
    }
    
    
    
};