   string makeGood(string s) {
        
        string ans;
        
       for(int i=0;i<s.length();i++){
           ans+=s[i];
           while(ans.length()&&((ans.back()==s[i+1]+32)||(ans.back()==s[i+1]-32))){
               ans.pop_back();
               i++;
           }
       }
        
        return ans;
    }
