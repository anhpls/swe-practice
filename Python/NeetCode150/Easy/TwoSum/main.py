'''
Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.

You may assume that every input has exactly one pair of indices i and j that satisfy the condition.

Return the answer with the smaller index first.

Example 1:

Input: 
nums = [3,4,5,6], target = 7

Output: [0,1]
'''

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {} # value: index

        for i, x in enumerate(nums): # enumerate = (index, value)
            needed = target - x

            if needed in seen:
                return [seen[needed], i] # returns index of needed number and current index
            else:
                seen[x] = i

if __name__ == "__main__":
    s = Solution()

    nums = [3, 4, 5, 6]
    target = 7

    print(s.twoSum(nums, target))

