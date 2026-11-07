# valid parentheses
# at the end, if stack is empty then its valid
# check if stack is empty and exists in paren
class Solution:
    def isValid(self, s: str) -> bool:
        paren = {'}': '{', ')':'(', ']':'['}
        stack = []

        # {[()]}
        for char in s:
            if char in paren: # checking for closing bracket
                if not stack: # if stack is empty, then there's nothing to compare the closing bracket to 
                    return False
                if stack[-1] == paren[char]: # if most recent char on stack is equal to its respective open bracket 
                    stack.pop() # pop because it works
                else:
                    return False # if most recent on stack isn't equal in bracket types, return False
            else:
                stack.append(char) # else its an open bracket so append to stack

        return not stack # true if stack is empty, false if not empty
