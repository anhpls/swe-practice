'''
Valid Anagram. Given two strings s and t, return true if t is an anagram of s (same letters, same counts, different order allowed).
Example: s = "anagram", t = "nagaram" → true.
'''

class Solution:
    def isValid(self, s: str, t: str) -> bool:
        if len(s) is not len(t): return False # different lengths so not anagram

        d = {}

        for letter in s:
            if letter in d:
                d[letter] = d[letter] + 1
            else:
                d[letter] = 1

        for letter in t:
            if letter in d:
                d[letter] = d[letter] - 1
                if d[letter] < 0:
                    return False
            else:
                return False

        return True

if __name__ == "__main__":
    sol = Solution()

    s = "anagram"
    t = "nagaram" 
    
    print(sol.isValid(s, t))