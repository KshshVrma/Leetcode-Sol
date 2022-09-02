class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int count=0;
       vector<int>ans;
        sort(nums.begin(),nums.end());
        
        vector<int>temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end(),greater<int>());
      int j=0;
       int maxi=INT_MIN;
        for(int i=0;i<nums.size()/2;i++){
            
             if(maxi<nums[j]+temp[j])
           
               maxi=temp[j]+nums[j];j++;
            
        }
   
        return maxi;
    }
};