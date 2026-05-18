class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums.sort()
        result = []
        for idx in range(n-2):
            left = idx + 1
            right = n - 1
            if idx > 0 and nums[idx] == nums[idx-1]:
                continue
            while(left < right):
                if nums[left] + nums[right] + nums[idx] == 0:
                    result.append([nums[idx], nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while(nums[left] == nums[left - 1] and left < right):
                        left += 1
                elif nums[left] + nums[right] + nums[idx] > 0:
                    right -= 1
                else:
                    left += 1
        return result