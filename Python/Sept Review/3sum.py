# 3Sum: given an integer array nums, return all triplets [nums[i], nums[j], nums[k]] where:

# i, j and k are three different indices, and
# nums[i] + nums[j] + nums[k] == 0.

# The answer must not contain duplicate triplets. The order of the output and the order within each triplet don't matter.

# Examples:
# nums = [-1, 0, 1, 2, -1, -4] → [[-1, -1, 2], [-1, 0, 1]]
# nums = [0, 1, 1] → []
# nums = [0, 0, 0] → [[0, 0, 0]]

"""
notes:
sorted array helps; sorting is O(n log n)
skip duplicates by comparing values at i == i + 1
use first occurence and skip the repeats
"""

# nums.sort()            # sorts the list in place, returns None
# new = sorted(nums)     # returns a new sorted list, original unchanged
from typing import List

class Solution: 
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort() # sort array O(n log n)
        results = []
        # [-2, 0, 0, 2, 2]
        #   i left      right

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]: # if i is the same as i - 1, then skip
                continue
            left = i + 1 # left stays right next to i
            right = len(nums) - 1 # right always restarts to end of list
            while left < right: # while pointers havent touched
                currSum = nums[i] + nums[left] + nums[right]
                if currSum < 0: 
                    left += 1
                elif currSum > 0:
                    right -= 1
                else:
                    results.append([nums[i], nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
        return results


if __name__ == "__main__":
    print(Solution.threeSum())


