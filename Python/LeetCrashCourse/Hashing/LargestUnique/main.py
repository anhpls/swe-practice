class Solution:
    def largestUnique(self, nums: list[int]) -> int:
        freq = {}
        maxVal = -1

        for num in nums:
            freq[num] = freq.get(num, 0) + 1
            
        for x in freq:
            if freq[x] == 1:
                if x > maxVal:
                    maxVal = x
        
        return maxVal

if __name__ == "__main__":
    s = Solution()

    nums = [5,7,3,9,4,9,8,3,1]

    print(s.largestUnique(nums))