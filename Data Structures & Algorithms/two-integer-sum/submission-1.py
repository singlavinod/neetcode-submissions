class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashB = dict()
        for i in range(len(nums)):
            curr = target - nums[i]
            if curr in hashB:
                return [hashB[curr], i]
            hashB[nums[i]] = i
        return []

