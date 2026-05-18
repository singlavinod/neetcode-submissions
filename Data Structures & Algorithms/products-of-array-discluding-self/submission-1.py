class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = [0]*len(nums)
        zero_count = 0
        zero_idxs = []
        for i in range(len(nums)):
            if nums[i] == 0:
                zero_count += 1
                zero_idxs.append(i)

        if zero_count > 1:
            return result
        elif zero_count == 1:
            non_zero_product = 1
            for j in range(len(nums)):
                if j != zero_idxs[0]:
                    non_zero_product *= nums[j]
            result[zero_idxs[0]] = non_zero_product
            return result
        else:
            product = 1
            for k in range(len(nums)):
                product *= nums[k]
            for l in range(len(nums)):
                result[l] = int(product/nums[l])
            return result



