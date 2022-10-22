//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  const int mod =1e8;
    int fillingBucket(int N) {
        // code here
        // if(N==0){
        //     return 1;
        // }
        // if(N<0)return 0;
        // return fillingBucket(N-1)+fillingBucket(N-2);
        
        vector<int>dp(N+1,0);
        dp[0]=1;
        for(int i=1;i<=N;i++){
            dp[i]=dp[i-1]%mod;
            if(i>=2)dp[i]=(dp[i]+dp[i-2])%mod;
        }
        return dp[N]%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends