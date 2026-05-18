class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int n = prices.size();

        for(int idx=0; idx< n-1; idx++){
            minPrice=min(minPrice, prices[idx]);
            maxProfit=max(maxProfit, prices[idx+1]-minPrice);
        }


        return maxProfit;
    }
};
