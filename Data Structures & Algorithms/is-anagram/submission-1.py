class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        skeymap = {}
        for character in s:
            skeymap[character] = 0

        for character in s:
            skeymap[character] += 1

        for character in t:
            try:
                skeymap[character] -= 1
                if skeymap[character] < 0:
                    return False
            except KeyError:
                return False

        for key, value in skeymap.items():
            if skeymap[key] != 0:
                return False

        return True
        