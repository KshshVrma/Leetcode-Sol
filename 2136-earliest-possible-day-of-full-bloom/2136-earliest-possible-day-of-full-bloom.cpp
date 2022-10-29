class Solution {
public:
  int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> v;
        int ans=INT_MIN,n=plantTime.size();
        for(int i=0;i<n;i++){
            v.push_back({plantTime[i],growTime[i]});
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b){
            return a.second > b.second;
        });
        int time=0;
        for(int i=0;i<n;i++){
            time+=v[i].first;
            ans=max(ans,time+v[i].second);
        }
        return ans; 
    }
};