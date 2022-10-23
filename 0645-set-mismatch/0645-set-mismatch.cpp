class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int temp=n*(n+1)/2;
        unordered_map<int,int>mp;int wow=-1;int sum=0;
        for(int i=0;i<nums.size();i++){
mp[nums[i]]++;
            sum+=nums[i];
        if(mp[nums[i]]==2){
            wow=nums[i];
           
        }
        
        }
        sum-=wow;
        
        int ans=temp-sum;
        vector<int>vec;
        vec.push_back(wow);
        vec.push_back(ans);
        
        return vec;
        
    }
};