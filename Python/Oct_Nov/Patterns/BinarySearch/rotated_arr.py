class Solution:
    def findTarget(self, nums: list[int], target: int) -> int:
        # one side is always sorted 
        # which side is sorted is known if nums[left] <= nums[mid] or nums[right] >= nums[mid]
        # then check if target is in the sorted side; if not then check the broken side
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (left + right) // 2 # set mid
            if target == nums[mid]: # checks mid evertime so exclude it
                return mid
            if nums[left] <= nums[mid]: # if [left] < [mid], that means this side is sorted
                if nums[left] <= target < nums[mid]: # target is in left side; exclude mid
                    right = mid - 1 # move right bound inward
                else:
                    left = mid + 1 # target is in right side so move left bound inward
            else: # else right side is sorted
                if nums[mid] < target <= nums[right]: # target is in right side (sorted); exclude mid 
                    left = mid + 1 # search right side (sorted)
                else: 
                    right = mid - 1 # search left side (broken side)
        return -1 

if __name__ == "__main__":
    print(Solution().findTarget([4,5,6,7,0,1,2], 3))
    
# time: O(log n) because it splits everything into halves like binary search
# space: space should be O(1) constant vars and they just get overwritten
