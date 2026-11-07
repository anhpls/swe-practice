class Solution:
    def foundTarget(self, nums: list[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while left <= right: # while they havent crossed each other
            mid = (left + right ) // 2
            if target == nums[mid]:
                return mid
            if target > nums[mid]:
                left = mid + 1 # reposition left bound
            else:
                right = mid - 1 # reposition right bound

        return -1 
