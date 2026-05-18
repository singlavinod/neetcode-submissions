class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [1]*n

        prefix_val = 1
        for i in range(1, n):
            prefix_val *= nums[i-1]
            result[i] = prefix_val

        postfix_val = 1
        for i in range(n-2, -1, -1):
            postfix_val *= nums[i+1]
            result[i] *= postfix_val
            
        return result
