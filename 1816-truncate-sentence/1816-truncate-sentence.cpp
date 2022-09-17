class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
      
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')k--;
            if(k==0){
                break;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};