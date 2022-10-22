class Solution {
public:
      string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        unordered_map<char, int> dict;
        for (char ch: t) {
            dict[ch]++;
        }
        int matched = 0, st = 0;
        int minLength = numeric_limits<int>::max();
        int startIdx = -1;

        for (int ed = 0; ed < s.length(); ed++) {
            if (dict.find(s[ed]) != dict.end()) {
                dict[s[ed]]--;
                if (dict[s[ed]] == 0)
                    matched++;
            }
            while (dict.find(s[st]) == dict.end() || dict[s[st]] < 0) {
                if (st > ed)
                    break;
                if (dict.find(s[st]) != dict.end())
                    dict[s[st]]++;
                st++;
            }

            if (matched == dict.size()) {
                if (minLength > ed - st + 1) {
                    minLength = ed - st + 1;
                    startIdx = st;
                }
            }
        }
        if (startIdx == -1) return "";
        return s.substr(startIdx, minLength);
    }
};