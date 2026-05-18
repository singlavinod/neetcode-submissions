class Solution:
    def isAnagram(self, s:str, t:str):
        if s is None or t is None or len(s) != len(t):
            return False
        count = [0]*26
        for i in range(len(s)):
            count[ord(s[i])-ord('a')] += 1
            count[ord(t[i])-ord('a')] -= 1
        for val in count:
            if val != 0:
                return False
        return True

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        if len(strs) == 1:
            return [strs]
        for i in range(len(strs)):
            if strs[i] is not None:
                curr_anagram = [strs[i]]
                for j in range(i + 1, len(strs)):
                    if strs[j] is not None and self.isAnagram(curr_anagram[0], strs[j]):
                        curr_anagram.append(strs[j])
                        strs[i] = None;
                        strs[j] = None;
                result.append(curr_anagram)
        return result


        