class Solution {
public:
    int f(vector<int>&nums,int target,int i,int sum,int n,map<pair<int,int>,int>&mp){
        if(i==n&&sum==target){
            return 1;
        }
        if(i==n){
            return 0;
        }
        if(mp.find({i,sum})!=mp.end()){
            return mp[{i,sum}];
        }
        return mp[{i,sum}]=(f(nums,target,i+1,sum+nums[i],n,mp)+f(nums,target,i+1,sum-nums[i],n,mp));
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
      map<pair<int,int>,int>mp;
        return f(nums,target ,0,0,n,mp);
    }
};