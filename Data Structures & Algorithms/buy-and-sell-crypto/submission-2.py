class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = prices[0]
        maxProfit = 0
        for idx in range(1, len(prices), 1):
            maxProfit = max(maxProfit, prices[idx]-minPrice)
            minPrice = min(prices[idx], minPrice)
        return maxProfit

            