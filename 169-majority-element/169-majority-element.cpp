class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=0;
        int maxcount=0;
        if(nums.size()==1){
            return nums[0];
        }
      int  maxvar=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                max++;
                if(max>=maxcount){
                    maxcount=max;
                    maxvar=nums[i];
                }
            }
            else{
                max=0;
            }
            
            
            
}
        return maxvar;
    }
};