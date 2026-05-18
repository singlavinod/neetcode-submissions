class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        result = [-1, -1]
        for i in range(n):
            for j in range(i):
                if nums[i] + nums[j] == target:
                    if i < j:
                        result = [i, j]
                    else:
                        result = [j, i]
        return result
        