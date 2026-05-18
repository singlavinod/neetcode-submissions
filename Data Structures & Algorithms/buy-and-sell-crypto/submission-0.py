class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        minPrice = prices[0]
        for idx in range(1, len(prices)):
            minPrice = min(prices[idx], minPrice)
            maxProfit = max(maxProfit, prices[idx]-minPrice)
        return maxProfit
