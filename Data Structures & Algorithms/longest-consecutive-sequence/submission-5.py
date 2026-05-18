class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = list(set(nums))
        nums.sort()
        if len(nums) < 2:
            return len(nums)
        sequence = 1
        max_sequence = 0

        for i in range(1, len(nums)):
            if nums[i-1] + 1 != nums[i]:
                sequence = 1
            else:
                sequence += 1
            max_sequence = max(sequence, max_sequence)
            print(nums, sequence, max_sequence)
        return max_sequence
