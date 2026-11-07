class Solution:
    def isValid(self, s: str) -> bool:
        # isalnum()
        for letter in s:
            if letter == "({[":
                return True
        
        return False

if __name__ == "__main__":
    s = Solution()

  