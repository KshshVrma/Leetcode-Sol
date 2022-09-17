class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int t=k;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')t--;
            if(t==0){
                break;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};