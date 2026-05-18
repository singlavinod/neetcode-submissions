class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashset = set(nums)
        max_sequence = 0
        # sequences = []
        for element in nums:
            if element + 1 not in hashset:
                sequence = 0
                while (element - sequence) in hashset:
                    sequence += 1
                    max_sequence = max(max_sequence, sequence)
        return max_sequence

