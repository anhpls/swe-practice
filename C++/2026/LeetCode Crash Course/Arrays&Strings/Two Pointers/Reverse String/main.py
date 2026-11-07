"""
def myFunc() -> None:     # void
def myFunc() -> int:      # returns int
def myFunc() -> str:      # returns string
def myFunc() -> bool:     # returns bool
def myFunc() -> list:     # returns list
def myFunc() -> List[int]: # returns list of ints
"""

class Solution:
    def reverseString(self, x: list[str]) -> None: 
        left = 0;
        right = len(x) - 1;

        while left < right:
            x[left], x[right] = x[right], x[left]

            left += 1
            right -= 1

s = Solution()
x = ["h", "e", "l", "l", "o"];
s.reverseString(x);
print(x)