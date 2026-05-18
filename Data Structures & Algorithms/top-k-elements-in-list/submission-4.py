class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        buffer = {}
        for num in nums:
            buffer[num] = 1 + buffer.get(num, 0)

        n = len(nums)
        buckets = [None]*(n+1)

        for num, count in buffer.items():
            if buckets[count]==None:
                buckets[count] = [num]
            else:
                buckets[count].append(num)
        result = []
        for i in range(n, -1, -1):
            if buckets[i]:
                for element in buckets[i]:
                    if len(result) < k:
                        result.append(element)
                    else:
                        break
            if len(result) == k:
                return result
            


