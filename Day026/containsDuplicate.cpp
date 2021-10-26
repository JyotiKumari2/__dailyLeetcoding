class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        bool check=false;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if((i->second)>1)
            {check=true;
             break;
            }
        }
        return check;
    }
};