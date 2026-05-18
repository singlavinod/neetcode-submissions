class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        maxWater = 0
        l, r = 0, n-1
        while(l<r):
            maxWater = max(maxWater, (r-l)*min(heights[l], heights[r]))
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        return maxWater