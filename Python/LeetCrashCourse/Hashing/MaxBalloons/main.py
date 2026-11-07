class Solution:
    def maxBalloons(self, text: str) -> int:
        freq = {}

        for letter in text:
            freq[letter] = freq.get(letter, 0) + 1

        return min(freq['b'], freq['a'], freq['l'] // 2, freq['o'] // 2, freq['n'])
    
if __name__ == "__main__":
    s = Solution()

    text = "loonbalxballpoon"

    print(s.maxBalloons(text))
                