class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0, l = 0, r = 1, n = prices.size();
        while(r < n){
            maxP = max(maxP, prices[r]-prices[l]);
            if (prices[r] < prices[l]){
                l = r;
            }
            r++;
        }
        return maxP;
    }
};
