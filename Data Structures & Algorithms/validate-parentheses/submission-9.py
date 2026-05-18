class Solution:
    def isValid(self, s: str) -> bool:
        closeOpen = {")":"(", "]":"[", "}":"{"}
        buf = []
        for ch in s:
            if ch == "(" or ch == "[" or ch == "{":
                buf.append(ch)
            else:
                if buf and buf[-1] == closeOpen[ch]:
                    buf.pop()
                else:
                    return False
        return len(buf)==0



        