class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>vec;
        for(int i=0;i<arr.size();i++){
            vec.push_back({(abs(arr[i]-x)),arr[i]});}
            sort(vec.begin(),vec.end());
            vector<int>ans;
            for(int i=0;i<k;i++){
                ans.push_back(vec[i].second);
            }
        sort(ans.begin(),ans.end());
        return ans;
    }
};