class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        n = len(nums)
        for idx in range(0, n-2, 1):
            if(idx > 0 and nums[idx] == nums[idx-1]):
                continue
            l = idx + 1
            r = n - 1
            while(l < r):
                if nums[idx] + nums[l] + nums[r] == 0:
                    res.append([nums[idx], nums[l], nums[r]]) 
                    l += 1
                    r -= 1
                    while(nums[l] == nums[l-1] and l < r):
                        l += 1
                elif nums[idx] + nums[l] + nums[r] > 0:
                    r -= 1
                else:
                    l += 1
        return res