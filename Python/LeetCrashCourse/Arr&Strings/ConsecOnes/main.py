class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        left = 0
        count = 0
        winLen = 0
        maxWin = 0

        for right in range(len(nums)):
            if nums[right] == 0:
                count += 1
            
            while count > k:
                if nums[left] == 0:
                    count -= 1
                left += 1
            winLen = right - left + 1
            maxWin = max(maxWin, winLen)

        return maxWin
    
if __name__ == "__main__":
    s = Solution()

    nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1]
    k = 3

    print(s.longestOnes(nums, k))
               


