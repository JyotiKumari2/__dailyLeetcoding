 class Solution {
public:
    int hammingWeight(uint32_t n) {
        if (n == 0) return 0;
        if (n>>1<<1 == n) return hammingWeight(n>>1);
        return hammingWeight(n>>1) + 1;
    }
};