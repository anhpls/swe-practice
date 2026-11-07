class Solution:
    def avgArr(self, nums: list[int], k: int) -> list[int]:
        winSize = 2*k + 1
        left = 0
        ans = [-1] * len(nums)
        currSum = 0

        for right in range(len(nums)):
            currSum += nums[right]

            if right - left + 1 > winSize:
                currSum -= nums[left]
                left += 1

            if right - left + 1 == winSize:
                center = left + k
                ans[center] = currSum // winSize 
        
        return ans
    
if __name__ == "__main__":
    s = Solution()

    nums = [7,4,3,9,1,8,5,2,6]
    k = 3

    print(s.avgArr(nums, k))