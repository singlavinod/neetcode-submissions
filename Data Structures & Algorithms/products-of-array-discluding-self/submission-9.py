class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        output = [1]*n
        
        prefix = 1
        for i in range(1, n):
            prefix *= nums[i-1]
            output[i] *= prefix

        postfix = 1
        for j in range(n-2, -1, -1):
            postfix *= nums[j+1]
            output[j] *= postfix

        return output