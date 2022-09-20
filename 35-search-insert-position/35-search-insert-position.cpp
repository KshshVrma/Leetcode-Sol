class Solution {
public:
    
    int binary(vector<int>& nums, int target){
        int i=0;int n=nums.size()-1;
        int mid=(i+n)/2;
        while(i<=n){
            mid=(i+n)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                n=mid-1;
            }
            else{
                i=mid+1;
            }
            
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        if(target<nums[0]){
            return 0;
        }
        if(binary_search(nums.begin(),nums.end(),target)){
            return binary(nums,target);
        }
        else{
            auto it=lower_bound(nums.begin(),nums.end(),target);
            return binary(nums,*it);
        }
    }
};