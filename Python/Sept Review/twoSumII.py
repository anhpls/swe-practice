# Two Sum II: same as Two Sum, but the array is sorted and you have to use O(1) extra space, so no hashmap.

# you get a 1-indexed array of integers numbers, sorted in non-decreasing order. Find two numbers that add up to target, and return their indices as [index1, index2], where 1 <= index1 < index2 <= len(numbers).

# non-decreasing means increasing with duplicates allowed
# There is exactly one solution.
# You can't use the same element twice.
# Your solution must use only O(1) extra space.

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List:
        left = 0
        right = len(nums) - 1

        while left < right: # while they're not at the same index
            curr = nums[left] + nums[right] 
            if curr > target:   # if sum is larger than target
                right -= 1  # decrement right side ptr
            elif curr < target: # if sum is less than target
                left += 1 # increment left side ptr
            else:
                return [left + 1, right + 1] # return their indices (+ 1 to each index b/c 1-indexed)

# time comp: O(n) because pointers do not revisit elements that have already been visited.
# space comp: O(1) because no matter how long the list gets, the only two int variables (and curr) remain constant
# this beats hashmap because having the list already sorted lets the pointers have certain directions to move; lets you rule out an element for good whereas hashmap stores everything its seen O(n)
            

if __name__ == "__main__":
    print(Solution().twoSum([5, 6, 10, 13], 11))
