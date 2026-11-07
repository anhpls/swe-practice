class Solution:
    def numJewelsInStone(self, jewels: str, stones: str) -> int:
         seen = set(jewels)
         count = 0

         for stone in stones:
              if stone in seen:
                   count += 1
         return count
              
if __name__ == "__main__":
     s = Solution()

     jewels = "aA"
     stones = "aAAbbbb"

     print(s.numJewelsInStone(jewels, stones))