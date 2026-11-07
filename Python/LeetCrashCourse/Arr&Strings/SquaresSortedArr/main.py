class Solution:
    def squared(self, nums: list[int]) -> list[int]:
        left = 0
        right = len(nums) - 1
        pos = len(nums) - 1
        result = [0] * len(nums)

        if not nums:
            return []
        
        while left <= right:
            if abs(nums[left]) > abs(nums[right]):
                result[pos] = nums[left] * nums[left]
                left += 1
            else:
                result[pos] = nums[right] * nums[right]
                right -= 1
            pos -= 1
        return result
    
if __name__ == "__main__":
    s = Solution()

    nums = [-7,-3,2,3,11]
    print(s.squared(nums))