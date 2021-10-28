class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2)return 0;
        int buy=prices[0],profit=0;
        for(int i=1;i<n;i++){
            if(buy>prices[i])buy=prices[i];
            if(prices[i]>buy)profit=max(profit,prices[i]-buy);
        }
        return profit>0?profit:0;
    }
};