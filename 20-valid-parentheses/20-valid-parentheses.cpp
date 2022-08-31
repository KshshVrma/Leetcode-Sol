class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
            } else if(s[i]=='{'){
                st.push('{');
            }else if(s[i]=='['){
                st.push('[');
            }
           else if(s[i]==')'&&!st.empty()){
               if(st.top()=='('){
                   st.pop();
               }
               else{
                   st.push(')');
               }
           }
             else if(s[i]==']'&&!st.empty()){
               if(st.top()=='['){
                   st.pop();
               }
               else{
                   st.push(']');
               }
           }
             else if(s[i]=='}'&&!st.empty()){
               if(st.top()=='{'){
                   st.pop();
               }
               else{
                   st.push('}');
               }
           }
            else{
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};