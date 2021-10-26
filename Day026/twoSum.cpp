class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index; // nums[i] --> i
        for(int i=0;i<nums.size();i++){
            if(index.count(target-nums[i]))
                return {index[target-nums[i]],i};
            index[nums[i]] = i;
        }
        return {0,0};
    }
};