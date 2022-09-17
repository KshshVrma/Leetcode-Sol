class Solution {
public:
    void f(vector<vector<int>>&ans,vector<int>&temp,int i,int n,int k){
        if(i>n){
            if(k==0){
                ans.push_back(temp);
                return ;
            }
            return;
        }
        
        temp.push_back(i);
        f(ans,temp,i+1,n,k-1);
        temp.pop_back();
        f(ans,temp,i+1,n,k);
        
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(ans,temp,1,n,k);
        return ans;
    }
};