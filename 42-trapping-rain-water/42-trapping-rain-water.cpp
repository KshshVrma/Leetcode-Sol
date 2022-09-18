class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        vector<int>lh;int t=-1;
        for(int i=0;i<height.size();i++){
            t=max(t,height[i]);
            lh.push_back(t);
        }
        
        vector<int>rh(height.size(),-1);
       t=-1;
        for(int i=height.size()-1;i>=0;i--){
            t=max(t,height[i]);
            rh[i]=t;
        }
        
        
        for(int i=1;i<height.size()-1;i++){
          
            int totalh=min(lh[i],rh[i]);
            sum+=
                (totalh-height[i])>0?totalh-height[i]:0;
        }
        return sum;
    }
};