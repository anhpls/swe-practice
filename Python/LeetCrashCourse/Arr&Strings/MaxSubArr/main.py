class Solution:
    def findMaxAvg(self, nums: list[int], k: int) -> float:
        left = 0
        currSum = 0
        maxSum = float("-inf")

        for right in range(len(nums)):
            currSum += nums[right]

            if right - left + 1 > k:
                currSum -= nums[left]
                left += 1
            
            if right - left + 1 == k:
                maxSum = max(maxSum, currSum)
            
        return maxSum / k

if __name__ == "__main__":
    s = Solution()

    nums = [1,12,-5,-6,50,3]
    k = 4

    print(s.findMaxAvg(nums, k))