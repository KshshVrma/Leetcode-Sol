class Solution {
    int fibo(int k,map<int,int> &mp){
    auto it=mp.find(k);
    if(it!=mp.end()){
        return mp[k];
    }
    if(k==1){
        return 1;
    }
        if(k==0){
            return 0;
        }
    mp[k]=fibo(k-1,mp)+fibo(k-2,mp);
    return mp[k];
}
public:
    int fib(int n) {
        map<int,int>mp;
       return  fibo(n,mp);
        
    }
};