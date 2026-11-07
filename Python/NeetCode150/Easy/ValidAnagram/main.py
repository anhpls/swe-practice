'''
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

Example 1:

Input: s = "racecar", t = "carrace"

Output: true
'''

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freqA = {}
        freqB = {}

        for a in s:
            freqA[a] = freqA.get(a, 0) + 1
        
        for b in t:
            freqB[b] = freqB.get(b, 0) + 1
        
        return freqA == freqB

if __name__ == "__main__":
    s = Solution()

    a = "racecare"
    b = "carrace"

    print(s.isAnagram(a, b))