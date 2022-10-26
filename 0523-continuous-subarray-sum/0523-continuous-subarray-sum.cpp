class Solution {
public:
  bool checkSubarraySum(vector < int > & nums, int k) {
        long prefix_sum = 0;
        unordered_set < int > seen;
        for (int & num: nums) {
            prefix_sum = (prefix_sum + num) % k;
            if (seen.count(prefix_sum)) return true;
            seen.insert(((prefix_sum - num) % k + k) % k);
        }
        return false;
    }
};