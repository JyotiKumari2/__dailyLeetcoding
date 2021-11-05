class Solution {
public:
    int arrangeCoins(int n) {
        long long tmp = 8LL*n;
         return (-1 + sqrt(1 + tmp))/2;
    }
};