class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
            if(s[i]==' '||i==s.length()-1){
                reverse(temp.begin(),temp.end());
                if(i==s.length()-1)
                ans+=temp;
                else{
                    ans+=temp;
                    ans+=" ";
                }
                temp="";
            }
        }
        return ans;
    }
};