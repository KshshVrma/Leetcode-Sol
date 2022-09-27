class Solution {
public:
    string pushDominoes(string d) {
        string ans="";
        vector<int>vec1(d.length(),1e7);
        vector<int>vec2(d.length(),1e7);
        for(int i=0;i<d.length();i++){
            if(d[i]=='L')ans+='L';
            else if(d[i]=='R')ans+='R';
            else{
                ans+='.';
            }
            if(d[i]=='R'){
                int j=i;
                vec1[i]=-1;
                int temp=0;
                while(j<d.length()&&d[j]!='L'){
                    vec1[j]=temp++;
                    j++;
                }
               
                
            }
        }
        for(int i=d.length()-1;i>=0;i--){
if(d[i]=='L'){
                int j=i;
                vec2[i]=-1;
                int temp=0;
                while(j>=0&&d[j]!='R'){
                    vec2[j]=temp++;
                    j--;
                }
                
            }
            
        }
        for(int i=0;i<vec1.size();i++){
            if(vec1[i]<vec2[i]){
                ans[i]='R';
            }
            else if(vec2[i]<vec1[i]){
                ans[i]='L';
            }
            
        }return ans;
    }
};