'''
Given a string s, return true if it is a palindrome, otherwise return false.

A palindrome is a string that reads the same forward and backward. It is also case-insensitive and ignores all non-alphanumeric characters.
'''

class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1

        while left < right:
            # skip if not alphanumeric
            while left < right and not s[left].isalnum():
                left += 1
            
            # skip if not alphanumeric 
            while left < right and not s[right].isalnum():
                right -= 1

            # return false if left != right both lowered
            if s[left].lower() != s[right].lower():
                return False
            
            # move inward
            left += 1
            right -= 1

        return True
    
if __name__ == "__main__":
    s = Solution()

    sentence = "Was it a car or a cat I saw?"

    print(s.isPalindrome(sentence))