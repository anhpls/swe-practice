class Solution:
    def isPangram(self, sentence: str) -> bool:
        # true if sentence is pangram
        alphabet = set()

        for letter in sentence:
            alphabet.add(letter)
        
        if len(alphabet) == 26:
            return True
        else: 
            return False
        
if __name__ == "__main__":
    s = Solution()

    #sentence = "thequickbrownfoxjumpsoverthelazydog"
    sentence = "leetcode"

    print(s.isPangram(sentence))
