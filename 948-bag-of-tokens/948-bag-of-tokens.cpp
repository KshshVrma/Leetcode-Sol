class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int s=0;int e=n-1;int count=0;
        while(s<e){
            if(tokens[s]<=power){
                power-=tokens[s];
                s++;
                count++;
            }
            else if(count>0){
                power+=tokens[e];
                e--;
                count--;
            }
            else{
                break;
            }
        }
        if(s==e&&power>=tokens[s]){
            count++;
        }
        return count;
    }
};