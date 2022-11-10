string removeDuplicates(string s) {
        if(s.length()<=1)return s;
        stack<char>st;int i=1;
        st.push(s[0]);
        while(i<s.length()){
            if(st.size()!=NULL&&st.top()==s[i])
            {
                st.pop();
                
            }
            else
            st.push(s[i]);

            i++;


        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        if(ans.length()>1)
        reverse(ans.begin(),ans.end());
        return ans;
    }
