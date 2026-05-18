class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = l + 1
        maxProfit = 0
        while(l < r and r < len(prices)):
            maxProfit = max(maxProfit, prices[r]-prices[l])
            if prices[r] < prices[l]:
                l = r
                r += 1
            else:
                r += 1
        return maxProfit