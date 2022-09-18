class Solution {
       int un(int m, int n,map<pair<int,int>,int>&mp) {
           if(mp.find({m,n})!=mp.end()){
               return mp[{m,n}];
           }
           
        if(m==1&&n==1){
            return 1;
        }
        if(m==0||n==0){
            return 0;
        }
        mp[{m,n}]= un(m-1,n,mp)+un(m,n-1,mp);
           return mp[{m,n}];
    }
    
public:
    int uniquePaths(int m, int n) {
      map<pair<int,int>,int>mp;
      return  un(m,n,mp);
    
    }
};