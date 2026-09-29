# Given nums, return true if any value appears at least twice
# seen = set()   # empty set (not {}, which makes an empty dict)
# seen.add(x)    # insert
# x in seen      # O(1) membership check
from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set() # declare empty set

        for num in nums: # for every num in nums
            if num in seen: # if num is already in seen
                return True # that means there's the duplicate so return true

            seen.add(num) # populate seen with num

        return False    # no true means false
        
        
# O(n) time complexity and O(n) for space complexity


if __name__ == "__main__":
    print(Solution().containsDuplicate([5, 4, 10, 12]))
