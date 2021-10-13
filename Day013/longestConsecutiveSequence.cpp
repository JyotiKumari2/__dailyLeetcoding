class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        for (int i = 0; i < nums.size(); i++) {
            numSet.insert(nums[i]);
        }
        int maxLength = 0;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            if (numSet.find(n) == numSet.end()) {
                continue;
            }
            numSet.erase(n);
            int pre = n - 1;
            int next = n + 1;
            while (numSet.find(pre) != numSet.end()) {
                numSet.erase(pre--);
            }
            while (numSet.find(next) != numSet.end()) {
                numSet.erase(next++);
            }
            int length = next - pre - 1;
            if (length > maxLength) {
                maxLength = length;
            }
        }
        return maxLength;
    }
};