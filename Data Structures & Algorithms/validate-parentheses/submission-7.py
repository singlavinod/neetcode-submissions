class Solution:
    def isValid(self, s: str) -> bool:
        stack = deque()
        hmap = {')':'(', '}':'{',']':'['}
        for c in s:
            if c in hmap:
                if len(stack) > 0 and stack[-1] == hmap[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return True if len(stack)==0 else False