class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums.sort()
        res = []

        for idx in range(n-2):
            l, r = idx+1, n-1
            if idx > 0 and nums[idx] == nums[idx-1]:
                continue
            while(l < r):
                threesum = nums[idx]+nums[l]+nums[r]
                if threesum == 0:
                    res.append([nums[idx],nums[l],nums[r]])
                    l += 1
                    r -= 1
                    while(l<r and nums[l]==nums[l-1]):
                        l += 1
                elif threesum > 0:
                    r -= 1
                else:
                    l += 1
        return res

            
            