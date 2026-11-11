'''
Given an array of integers nums sorted in ascending order, and an integer target, write a function to search for target in nums. If target exists, return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Example 1
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4 (9 is at index 4)
'''

class Solution:
    def binarySearch(self, nums: list[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if target > nums[mid]:
                left = mid + 1
            elif target == nums[mid]: 
                return mid
            else:
                right = mid - 1

        return -1

if __name__ == "__main__":
    print(Solution().binarySearch([-1,0,3,5,9,12], 9))

# time: O(log n)
# space: O(1) constant that gets overwritten
