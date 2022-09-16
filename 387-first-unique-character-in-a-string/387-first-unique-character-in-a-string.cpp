class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            char y=s[i];
            mp[y]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};