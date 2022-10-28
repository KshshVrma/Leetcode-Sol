class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n=s.size();
        // maps sorted string to its anagrams in the array
        unordered_map<string,vector<string>> m;
        for(int i=0;i<n;i++){
        // this string is used as a frequency counter of characters for each string 
            string temp(26,'0');
            for(char c:s[i]){
                temp[c-'a']++;
            }
            // store in map
            m[temp].push_back(s[i]);
        }
        vector<vector<string>> res;
        for(auto i:m){
            res.push_back(i.second);
        }
        return res;
    }
};