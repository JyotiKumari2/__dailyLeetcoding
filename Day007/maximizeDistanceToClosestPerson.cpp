class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int l = 0, r = l;
    int max_val = INT_MIN;
    
    while (r<seatsSize) {
        if (seats[r] == 0) {
            r++;
        } else {
            max_val = fmax(max_val, r-l+1);
            l = r;
            r++;
        }
    }
    
    max_val -= 2; //max_val is 0 numbers;
    int pos_count = 0;
    if (seats[r-1] == 0) {
        for (int i=seatsSize-1; i>=0; i--) {
            if (seats[i] == 0) {
                pos_count++;
            } else {
                break;
            }
        }
    }
    
    int pre_count = 0;
    if (seats[0] == 0) {
        for (int i=0; i<seatsSize; i++) {
            if (seats[i] == 0) {
                pre_count++;
            } else {
                break;
            }
        }
    }
    
    int mid_count = max_val % 2 == 0? max_val/2: max_val/2+1;
    int ret = mid_count;
    ret = fmax(ret, pre_count);
    ret = fmax(ret, pos_count);
    
    return ret;   
    }
};