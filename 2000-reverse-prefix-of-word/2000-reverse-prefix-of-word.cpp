class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto it=find(word.begin(),word.end(),ch);
        if(it==word.end()){
            return word;
        }
        int off;
        if(it!=word.begin()){
            off=it-word.begin();
        }
        reverse(word.begin(),word.begin()+off+1);
        return word;
    }
};