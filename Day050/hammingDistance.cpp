class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        x=x^y;
        while(x){
            x=x&(x-1);
            ans++;
        }
        return ans;
    }
};