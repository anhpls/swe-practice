class Solution:
    def isValid(self, s: str) -> bool:
        paren = {
            "}": "{",
            "]": "[",
            ")": "("
        }
        stack = []

        for char in s:
            if char in paren: # if closing bracket
                if not stack:
                    return False
                if stack[-1] == paren[char]: # check latest to see if its responding open bracket
                    stack.pop() # true then pop
                else: # not matching bracket
                    return False
            else: # open bracket so append
                stack.append(char)                

        return not stack

if __name__ == "__main__":
    s = "([)]"
    print(Solution().isValid(s))
