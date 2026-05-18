class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        buffer = dict()
        for idx in range(len(nums)):
            diff = target - nums[idx]
            # print(diff, buffer)
            if diff in buffer.keys():
                return [buffer[diff], idx]
            else:
                buffer[nums[idx]]=idx
        return []