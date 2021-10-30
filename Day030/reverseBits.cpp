class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i=1; i<33; i++) {
            if (n>>1<<1 != n) {
               result += 1<<(32-i);
            }
            n = n>>1;
        }
        return result;
    }
};