# Valid Palindrome: given a string s, return true if it's a palindrome after lowercasing it and removing everything that isn't a letter or number. A palindrome reads the same forward and backward.

class Solution: 
    def valid(self, s: str) -> bool:
        # toLower every letter + skip chars that arent letters or digits
        # start pointer at front and then start at back to check if they're equal 

        i = 0 # start pointer
        j = len(s) - 1 # end pointer

        while i < j:
            while not s[i].isalnum() and i < j:
                i += 1
            while not s[j].isalnum() and j > i:
                j -= 1
            if s[i].lower() != s[j].lower():
                return False
            i += 1
            j -= 1

        return True

# O(1/2 n) -> O(n) because no constants + the pointers only loop over the n amt of characters in string even with nested loops (it doesnt revisit already counted for letters)
# O(1) because fixed length of letters in the string


if __name__ == "__main__":
    print(Solution().valid("abc"))
