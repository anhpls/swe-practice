class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        if not nums:
            return []
        
        for i in range(1, len(nums)):
            nums[i] = nums[i - 1] + nums[i]

        return nums

if __name__ == "__main__":
    s = Solution()

    nums = [1, 2, 3, 4]

    print(s.runningSum(nums))