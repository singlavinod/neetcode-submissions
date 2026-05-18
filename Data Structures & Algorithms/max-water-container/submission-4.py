class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        maxWater=0
        l = 0
        r = n-1
        while(l < r):
            maxWater = max(maxWater,(r-l)*(min(heights[r], heights[l])))
            if heights[r] < heights[l]:
                r-=1
            else:
                l+=1
        return maxWater
        