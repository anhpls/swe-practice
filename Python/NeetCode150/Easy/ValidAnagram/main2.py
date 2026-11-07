class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        freq = {}

        for i in range(len(s)):
            freq[s[i]] = freq.get(s[i], 0) + 1
            freq[t[i]] = freq.get(t[i], 0) - 1
        
        for count in freq.values():
            if count != 0:
                return False
        
        return True
    
if __name__ == "__main__":
    s = Solution()
    a = "racecar"
    b = "carrace"

    print(s.isAnagram(a, b))