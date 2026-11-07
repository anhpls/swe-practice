class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        magFreq = {}

        for letter in magazine:
            magFreq[letter] = magFreq.get(letter, 0) + 1

        for letter in ransomNote:
            magFreq[letter] = magFreq.get(letter, 0) - 1
            if magFreq[letter] < 0:
                return False
        return True
        
if __name__ == "__main__":
    s = Solution()

    ransomNote = "a"
    magazine = "a"

    print(s.canConstruct(ransomNote, magazine))