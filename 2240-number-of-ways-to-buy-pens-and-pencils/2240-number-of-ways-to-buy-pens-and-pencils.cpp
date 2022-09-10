class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long sum=0;
        for(int i=0;total-cost1*i>=0;i++){
            long long j=(total-cost1*i)/cost2;
            sum+=j+1;
        }
        return sum;
    }
};