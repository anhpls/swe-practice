class Soltuion:
    def sortedSquare(self, nums: list[int]) -> list[int]:
        left = 0
        right = len(nums) - 1
        write = len(nums) - 1
        result = [0] * len(nums)

        while left <= right:
            if abs(nums[left]) > abs(nums[right]):
                result[write] = nums[left] * nums[left]
                left += 1
            else:
                result[write] = nums[right] * nums[right]
                right -= 1
            write -= 1

        return result
    
if __name__ == "__main__":
    sol = Soltuion();

    nums = [-4, -1, 0, 3, 10]
    print(sol.sortedSquare(nums))