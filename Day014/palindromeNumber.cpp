class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) {
            return false;
        }

        long int revnum = 0;
        int num = x;
        
        while (x != 0) {
            int rem = x % 10;
            x /= 10;
            
            revnum = (revnum*10) + rem;
        }
        
        if (revnum == num) {
            return true;
        }
        return false;
    }
};