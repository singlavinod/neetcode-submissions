class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # hashset = dict()
        # nums.sort()

        # for idx, num in enumerate(nums):
        #     hashset[num] = idx

        # left = 0
        # right = len(nums) - 1

        # while(left < right):
        n = len(nums)
        nums.sort()
        result = []
        for i in range(n):
            for j in range(i+1, n):
                for k in range(j+1, n):
                    if i != j and j != k and nums[i] + nums[j] + nums[k] == 0:
                        triplet = [nums[i], nums[j], nums[k]]
                        # print(triplet)
                        if triplet not in result:
                            result.append(triplet)
        return result
