class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0, max_sum = -10000;
        for(int i=0;i<nums.size();i++){
            currentSum += nums[i];
            max_sum = max(max_sum, currentSum);
            if(currentSum < 0) currentSum = 0;
        }
        return max_sum;
    }
};