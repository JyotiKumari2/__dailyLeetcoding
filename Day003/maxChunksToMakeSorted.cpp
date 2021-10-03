class Solution {
public:
    int dp[11];
    int sol(vector<int> &arr, int i, int n,int preMax){
        if(i>=n)return 0;
        if(preMax>*min_element(arr.begin()+i,arr.end()))return INT_MIN/2;
        if(dp[i]!=-1)return dp[i];
        int ans=INT_MIN/2;
        for(int k=i;k<n;k++){
            int prev=*max_element(arr.begin()+i,arr.begin()+k+1);
            int temp=1+sol(arr,k+1,n,prev);
            ans=max(temp,ans);
        }
        return dp[i]=ans;
    }
    int maxChunksToSorted(vector<int>& arr) {
        memset(dp,-1,sizeof dp);
        return sol(arr,0,arr.size(),INT_MIN);
    }
};