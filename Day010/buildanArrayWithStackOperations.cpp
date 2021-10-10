class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>output;
        
        int size=target.size();
        int j=0;
        for(int i=1;i<=n;i++)
        {
            if(j>=size)
                break;
            if(target[j]==i)
            {
                output.push_back("Push");
                j++;
            }
            else
            {
                output.push_back("Push");
                output.push_back("Pop");
                
            }
            
        }
        return output;
    }
};