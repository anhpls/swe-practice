class Solution:
    def longestSub(self, s: str) -> int:
        if not s:
            return 0
        
        left = 0
        seen = set()
        maxLen = 0

        for right in range(len(s)):
            while s[right] in seen:
                seen.discard(s[left])
                left += 1
            seen.add(s[right])
            maxLen = max(maxLen, right - left + 1)

        return maxLen

if __name__ == "__main__":
    s = Solution()

    sentence = "pwwkew"
    print(s.longestSub(sentence))

