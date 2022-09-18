class Solution {
public:
    int minPartitions(string n) {
        int ans;
        int maxi=-1;
        for(int i=0;i<n.length();i++){
            string t="";
            t+=n[i];
            ans=stoi(t);
            if(ans>maxi){
                maxi=ans;
            }
        }
        return maxi;
    }
};