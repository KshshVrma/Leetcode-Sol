class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            
            if(binary_search(nums.begin(),nums.end(),nums[i]-diff)&&binary_search(nums.begin(),nums.end(),nums[i]+diff)){
                count++;
            }
        }
        return count;
    }
};