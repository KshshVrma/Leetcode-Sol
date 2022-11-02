class Solution {
public:
     int ans = INT_MAX;
    bool hasSingleCharDiff(string a, string b) {
        int cnt = 0;
        for(int i=0; i<8; ++i) {
            if(a[i] != b[i]) cnt++;
            if(cnt > 1) return false;
        }
        return true;
    }
    void countMutations(string start, string &end, vector<string> &bank, vector<int> &visited, int currCount) {
        
        if(start == end) {
            ans = min(ans, currCount);
            return;
        }
        
        for(int i=0; i<bank.size(); ++i) {
            if(!visited[i] and hasSingleCharDiff(start, bank[i])) {
                visited[i] = true;
                countMutations(bank[i], end, bank, visited, currCount + 1);
                visited[i] = false;
            }
        }
        
    }
    int minMutation(string start, string end, vector<string>& bank) {
       int n = bank.size();
       vector<int> visited(n, 0);
       countMutations(start, end, bank, visited, 0);
        
       return (ans == INT_MAX ? -1 : ans); }
};