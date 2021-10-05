// Sort Array By Parity
class Solution {
public:
vector<int> sortArrayByParity(vector<int>& nums) {
vector<int> ans;
int j=-12;
for(int i=0;i<nums.size();i++)
{
if(nums[i]%2==0&&nums[i]!=j)
{
int j=nums[i];
ans.push_back(nums[i]);
}
}
for(int i=0;i<nums.size();i++)
{
if(nums[i]%2!=0&&nums[i]!=j)
{
int j=nums[i];
ans.push_back(nums[i]);
}
}
return ans;
}
};