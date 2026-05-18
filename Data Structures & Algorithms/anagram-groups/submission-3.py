class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = {}
        if len(strs) == 1:
            return [strs]
        for s in strs:
            count = [0]*26;
            for c in s:
                count[ord(c)-ord('a')] += 1;
            if tuple(count) not in result.keys():
                result[tuple(count)] = [s]
            else:
                result[tuple(count)].append(s)
        return result.values()


        