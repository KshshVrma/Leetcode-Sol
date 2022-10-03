class Solution {
public:
//     int minCost(string colors, vector<int>& need) {
//         int count=0;
//         for(int i=0;i<colors.length()-1;i++){
//             if(colors[i]==colors[i+1]){
//                 count+=min(need[i],need[i+1]);
//                 if(need[i]<need[i+1]){
//                     colors.erase(i,1);
//                     need.erase(need.begin()+i);
//                     i--;
//                 }
//                 else{
//                     colors.erase(i+1,1);
//                     need.erase(need.begin()+i+1);
                    
//                 }
//             }
//         }
//         return count;
//     }
    int minCost(string s, vector<int>& cost) {
        int res = 0, max_cost = 0, sum_cost = 0, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (i > 0 && s[i] != s[i - 1]) {
                res += sum_cost - max_cost;
                sum_cost = max_cost = 0;
            }
            sum_cost += cost[i];
            max_cost = max(max_cost, cost[i]);
        }
        res += sum_cost - max_cost;
        return res;
    }
};