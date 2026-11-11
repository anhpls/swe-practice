class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        paren = {
            "}": "{",
            ")": "(",
            "]": "["                 
        }       

        for char in s:
            if char in paren: # if its a closing bracket
                if not stack: # if stack is empty
                    return False
                else: # stack is not empty so compare to top
                    if stack[-1] == paren[char]: # compare top to its open bracket
                        stack.pop() # if they match, then pop
                    else: # if two brackets don't match
                        return False
            else: # its an open bracket so append to stack
                stack.append(char)

        return not stack
