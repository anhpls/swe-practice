'''
Valid Parentheses

Given a string s containing only the characters '(', ')', '{', '}', '[' and ']', determine whether the input string is valid.

A string is valid if:

Open brackets are closed by the same type of bracket.
Open brackets are closed in the correct order.
Every close bracket has a matching open bracket of the same type.

Example 1
Input: s = "()"
Output: True

Example 2
Input: s = "()[]{}"
Output: True

Example 3
Input: s = "(]"
Output: False

Example 4
Input: s = "([])"
Output: True

Example 5
Input: s = "([)]"
Output: False
'''

# stack = []
# stack.append("(")   # push onto the top
# stack.append("[")
# stack[-1]           # peek at the top without removing it -> "["
# stack.pop()         # remove and return the top -> "["
# if not stack:       # check whether it's empty



class Solution:
    def isValid(self, s: str) -> bool:
        parens = {")": "(", "]": "[", "}": "{"}
        stack = []

        for char in s:
            if char in parens: # checking to see if its a closed bracket since the keys of parens are the closed brackets
                if not stack: # before comparing, gotta check if there's anything to compare in the stack first
                    return False
                if stack[-1] == parens[char]: # if top of stack is matching open bracket
                    stack.pop()
                else: # if they're not matching then return false
                    return False
            else:   # its an open bracket so just push onto stack
                stack.append(char)

        return not stack # return True/False (if empty then True which = valid)


