class Solution:
    def containsDupe(self, nums: list[int]) -> bool:
        s = set()

        for x in nums:
            if x not in s:
                s.add(x)
            else:
                return True # duplicate found
        
        return False


if __name__ == "__main__":
    s = Solution()

    nums = [1, 2, 3, 0]

    print(s.containsDupe(nums))