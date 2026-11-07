class Solution:
    def findMaxLen(self, nums: list[int]) -> int:
        seen = {0: -1}
        presum = 0
        maxLen = 0

        for i, num in enumerate(nums):
            if num == 0:
                presum -= 1
            else:
                presum += num
            if presum in seen:
                maxLen = max(maxLen, i - seen[presum])
            else:
                seen[presum] = i

        return maxLen
            
            
            
            

