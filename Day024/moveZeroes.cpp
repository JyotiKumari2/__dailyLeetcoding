class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=0;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]==0)
                j++;
            else if(nums[i]==0 && nums[j]!=0)
            {
                swap(nums[i], nums[j]);
                j++;
                i++;
            }
            else if(nums[i]!=0 && nums[j]!=0)
            {
                i++;
                j++;
            }
        }
    }
};