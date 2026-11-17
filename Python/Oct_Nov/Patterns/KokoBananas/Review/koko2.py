class Solution:
    def isTarget(self, nums: list[int], target: int) -> int:
        # what i remember:
        # mid == target
        #   return here
        # left <= target < mid 
        # if mid < target <= right 
        # not sure if im confusing that with a different problem
        left = 0
        right = len(nums) - 1

        while left <= right:  # while they havent crossed
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            if nums[left] <= nums[mid]: # left side is sorted (4 5 6 7 0 1 2)
                if nums[left] <= target < nums[mid]: # if target between left and mid
                    right = mid - 1 # search leftside
                else: # target is between mid and right
                    left = mid + 1 # search rightside
            else:   # right side is sorted 
                if nums[mid] < target <= nums[right]: # if target between mid and right
                    left = mid + 1 # search right
                else:
                    right = mid - 1 # search left

        return -1
