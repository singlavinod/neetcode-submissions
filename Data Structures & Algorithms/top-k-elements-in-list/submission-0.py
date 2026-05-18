class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        key_val = {}
        for num in nums:
            key_val[num] = 1 + key_val.get(num, 0)
        
        sorted_by_count = dict(sorted(key_val.items(), key=lambda item: item[1], reverse=True))

        result = []
        for key, _ in sorted_by_count.items():
            if k > 0:
                result.append(key)
                k -= 1
        return result

        