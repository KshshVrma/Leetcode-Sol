class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans;
       string ans1;
        for(int i=0;i<word1.size();i++){
            ans+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
ans1+=word2[i];}
        int flag=1;
        if(ans1.length()!=ans.length()){
            return false;
        }
        for(int i=0;i<min(ans.length(),ans1.length());i++){
            if(ans[i]!=ans1[i]){
                flag=0;
                break;
            }
}if(flag==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};