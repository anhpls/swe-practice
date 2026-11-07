'''
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:

Input: nums = [1, 2, 3, 3]

Output: true
''' 


class Solution:
    def duplicateFound(self, nums: list[int]) -> bool: 
        freq = {}

        for x in nums:
            freq[x] = freq.get(x, 0) + 1
            if freq[x] > 1: 
                return True
            
        return False
    
if __name__ == "__main__":
    s = Solution()
    nums = [-1, -2, -3, -4]

    print(s.duplicateFound(nums))