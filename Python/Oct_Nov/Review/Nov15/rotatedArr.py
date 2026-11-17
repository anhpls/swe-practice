class Solution:
    def isValid(self, nums: list[int], target: int) -> int:
        # find the sorted side
        # search for target in that side
        # binary search i think
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target: # mid index is the target 
                return mid
            if nums[left] <= nums[mid]: # left is sorted
                if nums[left] <= target < nums[mid]: # if target is inside left side, then move inward right bound
                    right = mid - 1
                else: # target is not left side, search right
                    left = mid + 1
            else: # right side is sorted
                if nums[mid] < target <= nums[right]: # if target inside right side, then move inward left bound
                    left = mid + 1
                else: # target not inside right, search left
                    right = mid - 1
                    
        return -1
                

