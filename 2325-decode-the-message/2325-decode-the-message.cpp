class Solution {
public:
    int fun(char c,char arr[]){
        for(int i=0;i<26;i++){
            if(arr[i]==c){
                return i;
            }
        }
        return 0;
    }
    string decodeMessage(string key, string message) {
        int a[26]={0};
        char arr[26];
        int j=0;
        
        for(int i=0;i<key.length();i++){
if(key[i]!=' '){
    
    if(a[key[i]-97]==0){
         arr[j]=key[i];
        a[key[i]-97]=1;
    j++; 
    }
  
  
}}
            int  brr[26];
            for(int i=0;i<26;i++){
                brr[i]=i;
            }
            string ans="";
            for(int i=0;i<message.length();i++){
                if(message[i]==' '){
                    ans+=' ';
                }
                else{
                      int t=fun(message[i],arr);
                ans+=brr[t]+97;
                }
              
            }
            return ans;
            
        
        
        
        
        
    }
};