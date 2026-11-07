class Solution:
    def goodString(self, s: str) -> str:
        if not s:
            return s

        finalString = []

        for letter in s:
            if finalString and letter.lower() == finalString[-1].lower() and letter != finalString[-1]: # cC 
                        finalString.pop()
            else:
                 finalString.append(letter)


        return "".join(finalString)

if __name__ == "__main__":
    s = Solution()

    phrase = "leEeetcode"

    print(s.goodString(phrase))