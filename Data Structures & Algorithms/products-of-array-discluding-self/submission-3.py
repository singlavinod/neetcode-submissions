class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [0]*n
        prefix = [1]*n
        postfix = [1]*n
        prefix_val = 1

        for i in range(1, n):
            prefix_val *= nums[i-1]
            prefix[i] = prefix_val
        postfix_val = 1

        for i in range(n-2, -1, -1):
            postfix_val *= nums[i+1]
            postfix[i] = postfix_val
        
        for i in range(n):
            result[i] = prefix[i]*postfix[i]

        return result
