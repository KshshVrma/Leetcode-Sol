class Solution {
public:
     int recr(vector<string>& arr, string str, int index) {
        unordered_set<char>s(str.begin(), str.end());
        
        int ret = str.size();
        if (s.size() != ret) return 0;
        
        for (int i = index; i < arr.size(); i++) {
            ret = max(ret, recr(arr, str+arr[i], i+1));
        }
        return ret;
    }
    int maxLength(vector<string>& arr) {
        return recr(arr, "", 0);
    }
   
};