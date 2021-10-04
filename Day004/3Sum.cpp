 class Solution {
public:
     void helper(vector<int> &nums,int s,int d,set<tuple<int,int,int>> &m, vector<vector<int>> &ans){
    
    int a = s,b=nums.size()-1;
    while(a<b){
        if(nums[a]+nums[b]>d)
            b--;
        else if(nums[a]+nums[b]<d)
            a++;
        else{
            tuple<int,int,int> t = make_tuple(-1*d,nums[a],nums[b]);
            if(m.find(t)==m.end()){                
                m.insert(t);
                vector<int> v;
                v.push_back(-1*d);
                v.push_back(nums[a]);
                v.push_back(nums[b]);
                ans.push_back(v);
            }
            a++;    b--;
        }
    }
    return;
}


vector<vector<int>> threeSum(vector<int>& nums) {
    
  
    vector<vector<int>> ans;
    if(nums.size()<3)    return ans;
    vector<int> v;
    sort(nums.begin(),nums.end());
    set<tuple<int,int,int>> m;
    for(int i=0;i<nums.size()-2;i++)
        helper(nums,i+1,-1*nums[i],m,ans);
    
    return ans;
}
};
 