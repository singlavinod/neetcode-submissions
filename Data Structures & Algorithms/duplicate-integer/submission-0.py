class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        setBuffer = set()
        for num in nums:
            if num in setBuffer:
                return True
            setBuffer.add(num)
        return False
         