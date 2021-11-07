class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        unsigned int low=1,high=x, mid,sqrt;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(x/mid==mid)
                return mid;
            else if(x/mid>mid)
            {
                sqrt=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return sqrt;
    }
};