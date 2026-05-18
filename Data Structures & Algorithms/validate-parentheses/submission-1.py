class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) <= 1:
            return False

        stack = []
        for ch in s:
            if ch == '{' or ch == '(' or ch == '[':
                stack.append(ch)
            else:
                if len(stack) >= 1:
                    top = stack.pop()
                    if (ch == '}' and top == '{') or \
                        (ch == ']' and top == '[') or \
                        (ch == ')' and top == '('):
                        continue
                    else:
                        return False
                else:
                    return False

        return len(stack) == 0
