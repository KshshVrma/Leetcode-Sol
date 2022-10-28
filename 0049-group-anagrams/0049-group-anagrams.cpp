class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& s) {
   int n=s.size();
         unordered_map<string,vector<string>>mp;
         for(int i=0;i<n;i++){
             string temp(26,'0');
             for(char c:s[i]){
                 temp[c-97]++;
             }
             mp[temp].push_back(s[i]);
         }
         vector<vector<string>>ans;
         for(auto it:mp){
             ans.push_back(it.second);
         }
         return ans;
    }
};