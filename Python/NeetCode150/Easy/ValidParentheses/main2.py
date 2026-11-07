class Solution:
    def inOrder(self, sentence: str) -> bool:
        d = {}
        stack = []
        
        # key = value
        d[']'] = '['
        d['}'] = '{'
        d[')'] = '('

        for char in sentence: 
            if char not in d: # opening bracket
                stack.append(char)
            else:
                if not stack:
                    return False # stack is empty
                
                if d[char] == stack[-1]:   # if closing bracket is equal to top bracket
                    stack.pop() # pop the top of stack
                else:
                    return False    # if it's mismatched, then return False
        
        if not stack: # if stack is empty, return true because all brackets matched
            return True
        else:
            return False # stack isn't empty but has no matching cases
            
if __name__ == "__main__":
    s = Solution()

    sentence = "([{}])"
        
    print(s.inOrder(sentence))