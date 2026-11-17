import math
'''
k = how many bananas per hr (bhr banana per hour)
n = piles of bananas
h = hrs before guards will come back 
ith pile has piles[i] bananas? 

every hr -> 1 pile -> eat k bananas from it
if pile < k bananas, 
  eat all bananas
  stop eating

return min int k (eat all bananas within h hours)

examples:
piles = [3,6,7,11], h = 8 → 4
piles = [30,11,23,4,20], h = 5 → 30
piles = [30,11,23,4,20], h = 6 → 23
'''


# pile / bhr = rounded up for how many hours 
# import math.ceil(p/k) or use (p + k - 1) // k for rounded up to int

# slowest speed = 1 banana per hr
# fastest speed = 1 hr per pile so biggest pile 


class Solution:
    def eatenBananas(self, piles: list[int], h: int) -> int:
        left = 1 # slowest speed
        right = max(piles) # fastest speed
        currMin = max(piles)
        # middle speed (total hours <= h)
        # total hours is less than or equal to given hours before guards return
        # want the smallest speed 

        # if mid works, go left for min speeds
        # if mid speed is too slow, go right for faster speeds

        # (pile + k - 1) // k or math.ceil(p/k)
        # k in this case is speed so left, right, mid

        while left <= right:
            mid = (left + right) // 2
            totalHours = 0
            for pile in piles:
                totalHours = totalHours + math.ceil(pile/mid)
            if totalHours > h: # too slow, search right (faster speeds)
                left = mid + 1
            else: 
                currMin = mid # works so save mid speed
                right = mid - 1 # mid works; try slower speeds to see if an even smaller one also works
        return currMin

# time: O(n log m) m is biggest pile
# space: 
