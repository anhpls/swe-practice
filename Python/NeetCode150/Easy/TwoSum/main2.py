class Solution: 
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        d = {}

        for i, x in enumerate(nums):
            complement = target - x

            if complement in d:
                return [d[complement], i] # returns the index of the complement
            else:
                d[x] = i

if __name__ == "__main__":
    s = Solution()

    nums = [2, 7, 11, 15]
    target = 9

    print(s.twoSum(nums, target))
