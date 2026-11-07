class Solution:
    def missingNum(self, nums: list[int]) -> int:
        left = 0
        currSum = 0

        # [0, 1] -> 2 * 3 // 2 = 3 ?
        expectedSum = len(nums) * (len(nums) + 1) // 2

        for x in nums:
            currSum += x

        return expectedSum - currSum
    
if __name__ == "__main__":
    s = Solution()
    nums = [9,6,4,2,3,5,7,0,1]

    print(s.missingNum(nums))