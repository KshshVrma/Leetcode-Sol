class Solution {
public:
    int longestPalindrome(vector<string>& words) {
          unordered_map<string, int> count; // {word --> count}
        int ans = 0;
        int unpaired = 0; // count of unpaired words with same characters
        for(string w : words) {
            if(w[0] == w[1]) { // both characters same word
                 if(count[w] > 0) {
                     count[w]--; // found a pair using that
                     unpaired--;
                     ans += 4;
                 } else {
                     count[w]++; // adding current word
                     unpaired++;
                 }
            } else { // different characters in the word
                string rev = w;
                reverse(rev.begin(), rev.end());
                if(count[rev] > 0) {
                    count[rev]--; // found a reverse pair for w using that
                    ans += 4;
                } else {
                    count[w]++;
                }
            }
        }
        
        if(unpaired > 0) {
            ans += 2;
        }
        
        return ans;
    }
    
};