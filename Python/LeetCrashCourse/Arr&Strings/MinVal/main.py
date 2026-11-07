class Solution:
    def minStartValue(self, nums: list[int]) -> int:
        currSum = 0
        smallestSum = 0

        for i in range(len(nums)):
            currSum += nums[i]
            if currSum < smallestSum:
                smallestSum = currSum
            
        return max(1, 1 - smallestSum)
