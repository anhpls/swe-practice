class Solution:
    def countElements(self, arr: list[int]) -> int:
        seen = set(arr)
        count = 0

        for num in arr:
            if num + 1 in seen:
                count += 1

        return count
                
if __name__ == "__main__":
    s = Solution()

    arr = [1,2,3]

    print(s.countElements(arr))
            