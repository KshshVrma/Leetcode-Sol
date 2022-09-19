class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>one;
        vector<int>two;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>-1){
                one.push_back(nums[i]);
            }
            else{
                two.push_back(nums[i]);
            }
        }
        
        int temp;
        if(one.size()>=two.size())temp=1;
        else{
            temp=2;
        }
        vector<int>f;
        int i=0;
        
        if(temp==1){
           while(f.size()!=nums.size()){
            f.push_back(one[i]);
               if(f.size()!=nums.size()){
                   f.push_back(two[i]);
               }
               i++;
        }
            
            
        }
        else{
             while(f.size()!=nums.size()){
            f.push_back(two[i]);
               if(f.size()!=nums.size()){
                   f.push_back(one[i]);
               }
               i++;
        }
        }
        return f;
       
        
    }
};