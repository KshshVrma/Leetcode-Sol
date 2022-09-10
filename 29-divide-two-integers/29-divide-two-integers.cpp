class Solution {
public:
    int divide(long long  dividend, long long divisor) {
  
        long long int t= dividend/divisor;
     if(t>INT_MAX){
         return INT_MAX;
     }
        else if(t<INT_MIN){
            return INT_MIN;
        }
        return t;
         
        
        return t;
    }
};