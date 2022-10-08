class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j = i+1,k = n-1;
            while(j<k){
                long long sumTrip = nums[i]+nums[j]+nums[k];
                if(sumTrip==target) return sumTrip;
                if(abs(target-closest)>abs(sumTrip-target)) closest = sumTrip;
                if(sumTrip>target) k--;
                if(sumTrip<target) j++;
            }
            
        }
        return closest;        
    }
};