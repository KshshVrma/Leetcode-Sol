class Solution {
public:
   int findLength(std::vector<int>& nums1, std::vector<int>& nums2) {
	const int m = nums1.size(), n = nums2.size();
	int result = 0;
	for (int offset = 0; offset < m; offset++) {
		for (int i = offset, j = 0; i < m && j < n; ) {
			int count = 0;
			while (i < m && j < n && nums1[i++] == nums2[j++]) {
				count++;
			}
			result = std::max(result, count);
		}
	}
	for (int offset = 0; offset < n; offset++) {
		for (int i = 0, j = offset; i < m && j < n; ) {
			int count = 0;
			while (i < m && j < n && nums1[i++] == nums2[j++]) {
				count++;
			}
			result = std::max(result, count);
		}
	}
	return result;
}
};
