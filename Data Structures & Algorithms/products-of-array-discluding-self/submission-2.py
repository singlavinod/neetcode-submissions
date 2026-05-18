class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = [0]*len(nums)
        zero_count = 0
        product = 1
        for i in range(len(nums)):
            if nums[i] == 0:
                zero_count += 1
            else:
                product *= nums[i]

        if zero_count > 1:
            return result
        
        for j in range(len(nums)):
            if zero_count:
                result[j] = product if nums[j] == 0 else 0
            else:
                result[j] = int(product/nums[j])
        return result



