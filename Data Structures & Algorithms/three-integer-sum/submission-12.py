class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums.sort()
        res = []
        tsum = 0

        for idx in range(n-2):
            if(idx > 0 and nums[idx]==nums[idx-1]):
                continue
            l = idx+1
            r = n-1
            while(l<r):
                tsum = nums[idx] + nums[l] + nums[r]
                if(tsum==0):
                    res.append([nums[idx],nums[l],nums[r]])
                    l += 1
                    r -= 1
                    while(l<r and nums[l]==nums[l-1]):
                        l+=1
                elif(tsum <0):
                    l+=1
                else:
                    r-=1
        return res
