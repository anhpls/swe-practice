# Valid Anagram: given two strings s and t, return true if t is an anagram of s, and false otherwise.
# is / is not compares whether two things are the same obj in memory
# == / != checks for the same value
# for key in counts:            # keys
# for val in counts.values():   # values only
# for key, val in counts.items():  # both

class Solution:
    def valid(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False 

        matches = {} # dict: char -> count

        for char in s:
            if char not in matches:
                matches[char] = 0
            matches[char] += 1 

        for char in t:
            if char not in matches:
                return False
            matches[char] -= 1
            if matches[char] < 0:
                    return False

        # for count in matches.values():
        #     if count != 0:
        #         return False

        return True

# time complexity is O(N) but space complexity hits a ceiling of 26 alphabet letters so O(1) space;
# if the input could be any Unicode character, it'd be O(k), where k is the number of distinct characters.

if __name__ == "__main__":
    s = Solution()
    print(s.valid("anagram", "nagaram"))  # True
    print(s.valid("rat", "car"))          # False
    print(s.valid("a", "ab"))             # False  (different lengths)
    print(s.valid("aab", "abb"))          # False  (same letters, wrong counts)
    print(s.valid("", ""))                # True   (empty strings)
