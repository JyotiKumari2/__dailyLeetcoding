class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++)
            v[i] = i;
        vector<int> mark(n+1,0);
        
        for(int i=2;i*i<=n;i++)
        {
            if(!mark[i])
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    mark[j] = 1;
                    // cout<<j<<endl;
                }
            }
        }
        
        int ans=0;
        for(int i=2;i<n;i++)
            if(!mark[i])
                ans++;
        return ans;
    }
};