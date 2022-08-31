class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=s.length();
        int count=0;
        while(k--){
            if(s[k]!=' '){
             break;
            }
        }
        for(int j=k;j>=0;j--){
            if(s[j]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};